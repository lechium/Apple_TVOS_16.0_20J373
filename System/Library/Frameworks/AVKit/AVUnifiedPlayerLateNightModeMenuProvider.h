//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVObservationController, UIAction;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerLateNightModeMenuProvider
{
    UIAction *_offAction;	// 8 = 0x8
    UIAction *_onAction;	// 16 = 0x10
    AVObservationController *_observationController;	// 24 = 0x18
}

+ (id)_actionWithTitle:(id)arg1 targetLateNightModeEnabledState:(_Bool)arg2;	// IMP=0x00600000000f2c03
- (void).cxx_destruct;	// IMP=0x00000000000f2bac
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
- (void)_updateLateNightMode;	// IMP=0x00000000000f2b3b
@property(readonly, nonatomic) UIAction *onAction; // @synthesize onAction=_onAction;
@property(readonly, nonatomic) UIAction *offAction; // @synthesize offAction=_offAction;
- (void)_setLateNightModeEnabled:(_Bool)arg1;	// IMP=0x00000000000f292e
- (id)children;	// IMP=0x00000000000f286f
- (void)dealloc;	// IMP=0x00000000000f2826
- (id)initWithTitle:(id)arg1 image:(id)arg2 menuOptions:(unsigned long long)arg3;	// IMP=0x00000000000f273d

@end

