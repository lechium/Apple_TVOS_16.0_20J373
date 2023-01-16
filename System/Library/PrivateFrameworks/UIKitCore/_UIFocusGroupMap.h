//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, _UIFocusGroup;
@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface _UIFocusGroupMap : NSObject
{
    NSMapTable *_environmentToGroupMap;	// 8 = 0x8
    NSMapTable *_identifierToGroupMap;	// 16 = 0x10
    NSMapTable *_identifierToPrimaryItemMap;	// 24 = 0x18
    _UIFocusGroup *_nullGroup;	// 32 = 0x20
    NSMapTable *_standInItemsMap;	// 40 = 0x28
    NSArray *_focusGroups;	// 48 = 0x30
    id <UICoordinateSpace> _coordinateSpace;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000fb1566
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
- (id)visualDescription;	// IMP=0x0000000000fb1308
- (id)description;	// IMP=0x0000000000fb1266
- (id)focusGroupForItem:(id)arg1;	// IMP=0x0000000000fb119c
@property(readonly, nonatomic) NSArray *focusItems;
@property(readonly, nonatomic) NSArray *focusGroups; // @synthesize focusGroups=_focusGroups;
- (id)_indexEnvironment:(id)arg1;	// IMP=0x0000000000fb0921
- (void)_indexItems:(id)arg1;	// IMP=0x0000000000fb05b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fb02a4
- (id)initWithItems:(id)arg1 standInItemsMap:(id)arg2 coordinateSpace:(id)arg3;	// IMP=0x0000000000fb0052
- (id)initWithItems:(id)arg1 coordinateSpace:(id)arg2;	// IMP=0x0000000000fb003b

@end

