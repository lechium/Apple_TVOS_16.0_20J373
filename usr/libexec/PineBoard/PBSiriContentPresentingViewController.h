//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SiriPresentationPineBoardMainScreenViewController;
@protocol PBSystemOverlayContentDelegate;

@interface PBSiriContentPresentingViewController : UIViewController
{
    _Bool _acceptsEventFocus;	// 8 = 0x8
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    SiriPresentationPineBoardMainScreenViewController *_assistantViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000006502d
@property(readonly, nonatomic) SiriPresentationPineBoardMainScreenViewController *assistantViewController; // @synthesize assistantViewController=_assistantViewController;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000064d8a
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000064a88
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible;
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (id)initWithSiriViewController:(id)arg1;	// IMP=0x0010000000064a0a

@end

