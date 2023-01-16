//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (IntentsFoundation)
+ (id)if_arrayWithObjectIfNonNil:(id)arg1;	// IMP=0x005000000000b566
+ (id)_inf_arrayWithObjectIfNonNil:(id)arg1;	// IMP=0x005000000000b554
- (void)if_enumerateAsynchronouslyInSequenceOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a88e
- (void)if_enumerateAsynchronouslyInSequence:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a7d8
- (void)if_enumerateAsynchronouslyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a333
- (void)if_enumerateAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a319
- (id)if_objectsNotOfClass:(Class)arg1;	// IMP=0x001000000000a2bb
- (id)if_objectsOfClass:(Class)arg1;	// IMP=0x001000000000a25d
- (id)if_firstObjectWithIntValue:(int)arg1 forKey:(id)arg2;	// IMP=0x001000000000a1b6
- (id)if_firstObjectWithBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x001000000000a10f
- (id)if_firstObjectWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000a043
- (id)if_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009eed
- (id)if_objectsWithIntValue:(int)arg1 forKey:(id)arg2;	// IMP=0x0010000000009e46
- (id)if_objectsWithBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0010000000009d9f
- (id)if_objectsWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000009cd3
- (id)if_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009b0f
- (id)_inf_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009afd
- (id)if_arrayByRemovingObjectsInArray:(id)arg1;	// IMP=0x0010000000009a97
- (id)if_arrayByRemovingObject:(id)arg1;	// IMP=0x0010000000009a31
- (id)if_escapedComponentsJoinedByString:(id)arg1 forLocale:(id)arg2;	// IMP=0x001000000000993d
- (void)if_flatMapAsynchronouslyOnQueue:(id)arg1 transform:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000992e
- (void)if_flatMapAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009917
- (id)if_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x00100000000096fc
- (id)_inf_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x00100000000096ea
- (id)if_compactMapConcurrently:(CDUnknownBlockType)arg1;	// IMP=0x00100000000096dd
- (id)if_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x00100000000096d0
- (void)if_mapAsynchronouslyOnQueue:(id)arg1 transform:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000096c4
- (void)if_mapAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000096b0
- (id)if_mapConcurrently:(CDUnknownBlockType)arg1;	// IMP=0x001000000000961f
- (id)if_map:(CDUnknownBlockType)arg1;	// IMP=0x001000000000958e
@end

