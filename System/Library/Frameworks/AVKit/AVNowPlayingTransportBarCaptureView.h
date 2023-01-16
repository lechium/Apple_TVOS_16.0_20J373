//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class _UIVisualEffectBackdropView;

__attribute__((visibility("hidden")))
@interface AVNowPlayingTransportBarCaptureView : UIView
{
    _UIVisualEffectBackdropView *_leftCaptureView;	// 8 = 0x8
    _UIVisualEffectBackdropView *_middleCaptureView;	// 16 = 0x10
    _UIVisualEffectBackdropView *_rightCaptureView;	// 24 = 0x18
    _UIVisualEffectBackdropView *_backgroundCaptureView;	// 32 = 0x20
}

+ (Class)layerClass;	// IMP=0x00600000000a20d1
- (void).cxx_destruct;	// IMP=0x00000000000a2026
@property(readonly, nonatomic) _UIVisualEffectBackdropView *backgroundCaptureView; // @synthesize backgroundCaptureView=_backgroundCaptureView;
@property(readonly, nonatomic) _UIVisualEffectBackdropView *rightCaptureView; // @synthesize rightCaptureView=_rightCaptureView;
@property(readonly, nonatomic) _UIVisualEffectBackdropView *middleCaptureView; // @synthesize middleCaptureView=_middleCaptureView;
@property(readonly, nonatomic) _UIVisualEffectBackdropView *leftCaptureView; // @synthesize leftCaptureView=_leftCaptureView;
- (void)layoutSubviews;	// IMP=0x00000000000a1ef5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a1d3a

@end

