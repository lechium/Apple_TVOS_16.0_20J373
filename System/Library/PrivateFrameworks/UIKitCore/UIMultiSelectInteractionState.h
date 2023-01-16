//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIMultiSelectInteractionState : NSObject
{
    unsigned long long _ignoringSelectionChangedNotificationsCounter;	// 8 = 0x8
    unsigned long long _multiselectInteractionCounter;	// 16 = 0x10
    _Bool _selecting;	// 24 = 0x18
    NSIndexPath *_startIndexPath;	// 32 = 0x20
    NSIndexPath *_endIndexPath;	// 40 = 0x28
    NSArray *_originallySelectedIndexPaths;	// 48 = 0x30
    NSArray *_allSelectedIndexPaths;	// 56 = 0x38
    struct CGPoint _startPoint;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000869bd2
@property(copy, nonatomic) NSArray *allSelectedIndexPaths; // @synthesize allSelectedIndexPaths=_allSelectedIndexPaths;
@property(copy, nonatomic) NSArray *originallySelectedIndexPaths; // @synthesize originallySelectedIndexPaths=_originallySelectedIndexPaths;
@property(nonatomic, getter=isSelecting) _Bool selecting; // @synthesize selecting=_selecting;
@property(retain, nonatomic) NSIndexPath *endIndexPath; // @synthesize endIndexPath=_endIndexPath;
@property(retain, nonatomic) NSIndexPath *startIndexPath; // @synthesize startIndexPath=_startIndexPath;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void)endMultiselectInteraction;	// IMP=0x0000000000869ab6
- (void)beginMultiselectInteraction;	// IMP=0x0000000000869aac
@property(readonly, nonatomic, getter=isInMultiselectInteraction) _Bool inMultiselectInteraction;
- (id)pathsToDeselectForInterpolatedIndexPaths:(id)arg1 currentlySelectedIndexPaths:(id)arg2;	// IMP=0x00000000008699b2
- (id)pathsToSelectForInterpolatedIndexPaths:(id)arg1;	// IMP=0x00000000008698f5
- (void)beginSelectingWithStartingIndexPath:(id)arg1 otherSelectedIndexPaths:(id)arg2 keepCurrentSelection:(_Bool)arg3;	// IMP=0x0000000000869845
- (void)updateStateWithStartingIndexPath:(id)arg1 otherSelectedIndexPaths:(id)arg2;	// IMP=0x000000000086970b
- (void)updateStateWithDifferenceFromCurrentSelection:(id)arg1;	// IMP=0x0000000000869313
- (_Bool)stillValidForSelectedIndexPaths:(id)arg1;	// IMP=0x000000000086929c
@property(readonly, nonatomic) _Bool ignoringSelectionChangedNotifications;
- (void)ignoreSelectionChangedNotificationsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000869270
- (id)initWithCurrentSelection:(id)arg1;	// IMP=0x000000000086918a

@end

