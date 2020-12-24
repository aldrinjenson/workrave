#import <Cocoa/Cocoa.h>
#import "MacOSTimeBar.h"

#include "commonui/ITimeBar.hh"

@interface MacOSStatusBarView : NSView {

  NSStatusItem *statusItem;
  NSMenu *menu;
  bool menuVisibility;
  NSTrackingRectTag mouseEventTag;

  MacOSTimeBar *timebars[3];
}

- (void)setBreak: (int) id
          text:(NSString *)text
          primaryColor:(ColorId)primaryColor
          primaryValue:(int)primaryValue
          primaryMaxValue:(int)primaryMaxValue
          secondaryColor:(ColorId)secondaryColor
          secondaryValue:(int)secondaryValue
          secondaryMaxValue:(int)secondaryMaxValue;

- (id)initWithMenu:(NSMenu *)myMenu;
- (void)drawRect:(NSRect)rect;
- (void)mouseDown:(NSEvent *)theEvent;
- (bool)isMenuVisible;
- (void)dealloc;
@end