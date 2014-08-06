#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)

#include "CCLocalNotification.h"
#import   <UIKit/UIKit.h>

using namespace std;
//TODO(nick): applicationIconBadgeNumber only ever gets set as 1
//it is removed upon calling cancel
//this will not work with push notifications or even multiple LocalNotifications
void LocalNotification::show(std::string message, int interval, int tag)
{
  UILocalNotification *notification = [[UILocalNotification alloc] init];

  notification.applicationIconBadgeNumber = 1;
  notification.fireDate = [[NSDate date] dateByAddingTimeInterval:interval];
  notification.timeZone = [NSTimeZone defaultTimeZone];
  notification.alertBody = [NSString stringWithCString:message.c_str()
                                              encoding:[NSString defaultCStringEncoding]];
  notification.alertAction = @"Open";
  notification.soundName = UILocalNotificationDefaultSoundName;

  NSNumber* tag1 = [NSNumber numberWithInteger:tag];
  NSDictionary *infoDict = [NSDictionary dictionaryWithObject:tag1 forKey:@"ID"];
  notification.userInfo = infoDict;

  [[UIApplication sharedApplication] scheduleLocalNotification:notification];

  [notification release];
}

void LocalNotification::cancel(int tag)
{
  for(UILocalNotification *notification in [[UIApplication sharedApplication] scheduledLocalNotifications]) {
    if([[notification.userInfo objectForKey:@"ID"] integerValue] == tag) {
      [[UIApplication sharedApplication] cancelLocalNotification:notification];
    }
  }
  [UIApplication sharedApplication].applicationIconBadgeNumber = 0;
}

#endif // CC_TARGET_PLATFORM == CC_PLATFORM_IOS
