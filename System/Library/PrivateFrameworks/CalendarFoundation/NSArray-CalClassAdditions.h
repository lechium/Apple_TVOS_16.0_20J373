//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (CalClassAdditions)
+ (id)arrayOfSetsBySplitting:(id)arg1 batchSize:(unsigned long long)arg2;	// IMP=0x005000000004f601
- (id)CalTake:(unsigned long long)arg1;	// IMP=0x00100000000505a6
- (id)CalFlatMap:(CDUnknownBlockType)arg1;	// IMP=0x00100000000503f5
- (id)CalMap:(CDUnknownBlockType)arg1;	// IMP=0x00100000000501bf
- (id)CalFilter:(CDUnknownBlockType)arg1;	// IMP=0x00100000000500e9
- (id)CalFirstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000005001a
- (id)filteredArrayUsingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ac03
- (id)CalStringValueForKeys:(id)arg1 keyPaths:(id)arg2;	// IMP=0x001000000004ff59
- (id)CalStringValueForKeyPaths:(id)arg1;	// IMP=0x001000000004fefa
- (id)CalStringValueForKeys:(id)arg1;	// IMP=0x001000000004fe9b
- (id)_CalStringForArrayOfValues:(id)arg1;	// IMP=0x001000000004fbbe
- (id)_CalArrayOfValueForKeyPaths:(id)arg1;	// IMP=0x001000000004f9fc
- (id)_CalArrayOfValueForKeys:(id)arg1;	// IMP=0x001000000004f83a
- (id)CalMutableRecursiveCopy;	// IMP=0x001000000000b5a8
- (_Bool)CalContainsObjectIdenticalTo:(id)arg1;	// IMP=0x001000000004f5de
- (id)allObjectsWithClass:(Class)arg1;	// IMP=0x001000000000e705
@end
