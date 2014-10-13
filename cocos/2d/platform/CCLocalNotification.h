#ifndef ___LocalNotificationSample__LocalNotification__
#define ___LocalNotificationSample__LocalNotification__

#include <string>

class LocalNotification {
public:
  /**
   * Show local notification
   * @param message  Message should be shown in notificatin
   * @param interval Interval in seconds
   * @param tag      Tag to specify notification
   * @param tag      Badge for number of pending notifications
   */
  static void show(std::string message, int interval, int tag, int badge);
  
  /**
   * Cancel local notification specified by ID
   * @param tag Tag of local notification
   */
  static void cancel(int tag);
};

#endif /* defined(___LocalNotificationSample__LocalNotification__) */
