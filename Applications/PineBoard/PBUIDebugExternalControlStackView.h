//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class NSString, UILabel;

@interface PBUIDebugExternalControlStackView : UIStackView
{
    UILabel *_label;	// 8 = 0x8
    NSString *_activeSourceState;	// 16 = 0x10
    NSString *_powerDebugDescription;	// 24 = 0x18
    NSString *_volumeDebugDescription;	// 32 = 0x20
    NSString *_muteDebugDescription;	// 40 = 0x28
    NSString *_volumeButtonBehaviorString;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001f0045
@property(readonly, nonatomic) NSString *volumeButtonBehaviorString; // @synthesize volumeButtonBehaviorString=_volumeButtonBehaviorString;
@property(readonly, nonatomic) NSString *muteDebugDescription; // @synthesize muteDebugDescription=_muteDebugDescription;
@property(readonly, nonatomic) NSString *volumeDebugDescription; // @synthesize volumeDebugDescription=_volumeDebugDescription;
@property(readonly, nonatomic) NSString *powerDebugDescription; // @synthesize powerDebugDescription=_powerDebugDescription;
@property(readonly, nonatomic) NSString *activeSourceState; // @synthesize activeSourceState=_activeSourceState;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)_updateLabel;	// IMP=0x00100000001eff3f
- (void)setVolumeButtonBehavior:(long long)arg1;	// IMP=0x00100000001efef0
- (void)setMuteDebugDescription:(id)arg1;	// IMP=0x00100000001efeab
- (void)setVolumeDebugDescription:(id)arg1;	// IMP=0x00100000001efe66
- (void)setPowerDebugDescription:(id)arg1;	// IMP=0x00100000001efe21
- (void)setPowerFeatureTransport:(long long)arg1 isActiveSource:(_Bool)arg2;	// IMP=0x00100000001efdcf
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000001efdb6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000001efca0

@end

