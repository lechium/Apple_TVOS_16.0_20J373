//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (FMAdditions)
+ (id)fm_arrayWithSafeObject:(id)arg1;	// IMP=0x005000000000e45b
+ (id)fm_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(CDUnknownBlockType)arg2;	// IMP=0x005000000000e3c3
- (id)fm_dictionaryWithKeyGenerator:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e200
- (id)fm_arrayByFlattening;	// IMP=0x001000000000e0c6
- (void)fm_each:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e027
- (_Bool)fm_all:(CDUnknownBlockType)arg1;	// IMP=0x001000000000def1
- (_Bool)fm_any:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ddda
- (id)fm_filter:(CDUnknownBlockType)arg1;	// IMP=0x001000000000dd04
- (id)fm_map:(CDUnknownBlockType)arg1;	// IMP=0x001000000000db42
- (id)fm_arrayWithResultsOfBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000da0f
- (id)fm_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d845
@end

