//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer;

__attribute__((visibility("hidden")))
@interface _MKAnnotationSelectionEngineDebugView : UIView
{
    CALayer *_touchPointLayer;	// 8 = 0x8
    CALayer *_touchAnchorPointLayer;	// 16 = 0x10
    CAShapeLayer *_touchLineLayer;	// 24 = 0x18
    CAShapeLayer *_projectedLineLayer;	// 32 = 0x20
    struct CGPoint _touchAnchorPoint;	// 40 = 0x28
    struct CGPoint _touchPoint;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000010888f
@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(nonatomic) struct CGPoint touchAnchorPoint; // @synthesize touchAnchorPoint=_touchAnchorPoint;
- (void)_updateTouchLine;	// IMP=0x0000000000108481
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000107b8a

@end

