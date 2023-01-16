//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UICircleProgressLayer : CALayer
{
    double _progressLineWidth;	// 8 = 0x8
    double _oneFullRotation;	// 16 = 0x10
    _Bool _showProgressTray;	// 24 = 0x18
    long long _progressStartPoint;	// 32 = 0x20
    UIColor *_progressColor;	// 40 = 0x28
    UIColor *_progressBackgroundColor;	// 48 = 0x30
}

+ (_Bool)needsDisplayForKey:(id)arg1;	// IMP=0x006000000050c6b7
- (void).cxx_destruct;	// IMP=0x000000000050ca17
@property(nonatomic) _Bool showProgressTray; // @synthesize showProgressTray=_showProgressTray;
@property(nonatomic) double progressLineWidth; // @synthesize progressLineWidth=_progressLineWidth;
@property(retain, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) long long progressStartPoint; // @synthesize progressStartPoint=_progressStartPoint;
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x000000000050c729
- (id)initWithLayer:(id)arg1;	// IMP=0x000000000050c4e7
- (id)init;	// IMP=0x000000000050c3ad

// Remaining properties
@property(nonatomic) double progress; // @dynamic progress;

@end

