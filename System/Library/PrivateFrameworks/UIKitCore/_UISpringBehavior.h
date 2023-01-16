//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIDynamicBehavior.h"

@class UIAttachmentBehavior;

__attribute__((visibility("hidden")))
@interface _UISpringBehavior : UIDynamicBehavior
{
    UIAttachmentBehavior *_topLeft;	// 8 = 0x8
    UIAttachmentBehavior *_topRight;	// 16 = 0x10
    UIAttachmentBehavior *_bottomRight;	// 24 = 0x18
    UIAttachmentBehavior *_bottomLeft;	// 32 = 0x20
    double _damping;	// 40 = 0x28
    double _frequency;	// 48 = 0x30
    struct CGPoint _anchorPoint;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000bd8fba
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
- (id)init;	// IMP=0x0000000000bd8b22
- (id)initWithItem:(id)arg1 anchorPoint:(struct CGPoint)arg2;	// IMP=0x0000000000bd87b8

@end

