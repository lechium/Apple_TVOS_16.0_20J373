//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction, NSArray;

__attribute__((visibility("hidden")))
@interface SHListeningInnerCirclesLayer
{
    NSArray *_innerCircleLayers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000782e
@property(retain, nonatomic) NSArray *innerCircleLayers; // @synthesize innerCircleLayers=_innerCircleLayers;
@property(readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;
@property(readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
- (id)innerCircleCoreAnimation;	// IMP=0x00000000000073d4
- (id)innerCircleScaleNullAnimation;	// IMP=0x0000000000007298
- (void)addScaleNullAnimationToInnerCircleLayer:(id)arg1;	// IMP=0x00000000000071c6
- (void)addCoreAnimationToInnerCircleLayer:(id)arg1 withStartOffset:(double)arg2;	// IMP=0x0000000000007086
- (void)startListeningAnimation;	// IMP=0x0000000000006f76
- (void)layoutSublayers;	// IMP=0x0000000000006d14
- (id)buildInnerCircleLayers;	// IMP=0x0000000000006bde
- (void)setup;	// IMP=0x0000000000006a73

@end
