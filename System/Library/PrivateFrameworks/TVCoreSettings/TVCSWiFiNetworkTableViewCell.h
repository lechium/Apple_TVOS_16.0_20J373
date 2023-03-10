//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class TVCSWiFiNetworkTableViewAcessoryView;

__attribute__((visibility("hidden")))
@interface TVCSWiFiNetworkTableViewCell : UITableViewCell
{
    _Bool _showsSignalStrength;	// 8 = 0x8
    _Bool _showsPadlock;	// 9 = 0x9
    _Bool _showsSpinner;	// 10 = 0xa
    _Bool _showsDisclosureIndicator;	// 11 = 0xb
    float _scaledRSSI;	// 12 = 0xc
    TVCSWiFiNetworkTableViewAcessoryView *_customAccessoryView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001ba87
@property(readonly, nonatomic) TVCSWiFiNetworkTableViewAcessoryView *customAccessoryView; // @synthesize customAccessoryView=_customAccessoryView;
@property(nonatomic) float scaledRSSI; // @synthesize scaledRSSI=_scaledRSSI;
@property(nonatomic) _Bool showsDisclosureIndicator; // @synthesize showsDisclosureIndicator=_showsDisclosureIndicator;
@property(nonatomic) _Bool showsSpinner; // @synthesize showsSpinner=_showsSpinner;
@property(nonatomic) _Bool showsPadlock; // @synthesize showsPadlock=_showsPadlock;
@property(nonatomic) _Bool showsSignalStrength; // @synthesize showsSignalStrength=_showsSignalStrength;
- (void)_updateAccessoryTintColor;	// IMP=0x000000000001b86b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001b7a4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000001b763
- (void)setBars:(unsigned long long)arg1;	// IMP=0x000000000001b75d
- (void)setSecure:(_Bool)arg1;	// IMP=0x000000000001b740
- (void)setSubtitle:(id)arg1;	// IMP=0x000000000001b73a
- (void)setTitle:(id)arg1;	// IMP=0x000000000001b6c8
- (void)didMoveToSuperview;	// IMP=0x000000000001b556
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000001b496

@end

