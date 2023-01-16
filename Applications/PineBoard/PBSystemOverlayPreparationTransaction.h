//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class BSWatchdog, UIViewController;
@protocol PBSystemOverlayUIProvider;

@interface PBSystemOverlayPreparationTransaction : BSTransaction
{
    BSWatchdog *_watchdog;	// 8 = 0x8
    id <PBSystemOverlayUIProvider> _uiProvider;	// 16 = 0x10
    UIViewController *_viewController;	// 24 = 0x18
    id _interruptionContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000088740
@property(readonly, nonatomic) id interruptionContext; // @synthesize interruptionContext=_interruptionContext;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) id <PBSystemOverlayUIProvider> uiProvider; // @synthesize uiProvider=_uiProvider;
- (void)_didComplete;	// IMP=0x00100000000886c4
- (void)_begin;	// IMP=0x00100000000883cb
- (_Bool)_canBeInterrupted;	// IMP=0x00100000000883c3
- (void)interruptWithContext:(id)arg1;	// IMP=0x001000000008837a
- (id)initWithUIProvider:(id)arg1;	// IMP=0x000000000008830c
- (id)init;	// IMP=0x00100000000882fe

@end
