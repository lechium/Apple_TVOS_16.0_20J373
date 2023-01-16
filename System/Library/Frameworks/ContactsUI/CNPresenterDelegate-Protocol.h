//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class UIViewController;

@protocol CNPresenterDelegate <NSObject>
@property(readonly) _Bool isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(UIViewController *)arg2;
- (void)sender:(id)arg1 presentViewController:(UIViewController *)arg2;
@end
