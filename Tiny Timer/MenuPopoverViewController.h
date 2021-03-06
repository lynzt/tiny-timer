//
//  MenuPopoverViewController.h
//  Tiny Timer
//
//  Created by River Jiang on 2013-06-30.
//  Copyright (c) 2013 River Jiang. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "AXStatusItemPopup.h"
#import "RJTimer.h"

@interface MenuPopoverViewController : NSViewController

- (void) updateStatusBar;
- (void) setCountdownDuration: (NSTimeInterval *)countdownDuration;

@property(weak, nonatomic) AXStatusItemPopup *statusItemPopup;
- (IBAction)stopwatchCountdownSegmentedControl:(id)sender;

- (IBAction)stopwatchStartPause:(id)sender;
- (IBAction)stopwatchReset:(id)sender;
@property (weak) IBOutlet NSButton *startPauseButton;

@property (weak) IBOutlet NSTextField *countdownHourField;
@property (weak) IBOutlet NSTextField *countdownMinuteField;
@property (weak) IBOutlet NSTextField *countdownSecondField;

- (IBAction)resetCountdown:(id)sender;
- (IBAction)closePopover:(id)sender;

@property (weak) IBOutlet NSTextField *countdownHourTextField;
@property (weak) IBOutlet NSTextField *countdownMinuteTextField;
@property (weak) IBOutlet NSTextField *countdownSecondTextField;
- (IBAction)countdownHourEdit:(id)sender;
- (IBAction)countdownMinuteEdit:(id)sender;
- (IBAction)countdownSecondEdit:(id)sender;

@end
