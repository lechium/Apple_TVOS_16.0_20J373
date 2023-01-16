//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIFocusLinearMovementDebugView : UIView
{
    NSArray *_items;	// 8 = 0x8
    NSArray *_groups;	// 16 = 0x10
    _Bool _colorCoding;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000e2f8e9
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000e2eb23
- (id)_lineSegmentsFromFrames:(id)arg1;	// IMP=0x0000000000e2e89b
- (id)_primaryGroupFramesFromGroups:(id)arg1;	// IMP=0x0000000000e2e61b
- (id)_groupFramesFromGroups:(id)arg1;	// IMP=0x0000000000e2e39b
- (id)_itemFramesFromItems:(id)arg1;	// IMP=0x0000000000e2e1ae
@property(readonly, nonatomic, getter=isGroupMode) _Bool groupMode;
- (id)initWithGroups:(id)arg1;	// IMP=0x0000000000e2e0b5
- (id)initWithItems:(id)arg1;	// IMP=0x0000000000e2dfd1
- (id)init;	// IMP=0x0000000000e2dfb8

@end

