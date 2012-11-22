/* http://www.cocosbuilder.com
 * http://www.cocos2d-iphone.org
 *
 * Copyright (c) 2012 Zynga, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

//
// Controller for the Bomb Object
// When the Dragon (hero) touches this object, the Dragon moves downwards.
//
var Bomb = function()
{
    this.radius = 15;
};

Bomb.prototype.onUpdate = function()
{};

Bomb.prototype.handleCollisionWith = function(gameObjectController)
{
    if (gameObjectController.controllerName == "Dragon")
    {
        // Collided with the dragon, remove object and add an exposion instead
        this.isScheduledForRemove = true;
        
        cc.AudioEngine.getInstance().playEffect("Explo.caf");

        var explosion = cc.Reader.load("Explosion.ccbi");
        explosion.setPosition(this.rootNode.getPosition());

        this.rootNode.getParent().addChild(explosion);
    }
};
