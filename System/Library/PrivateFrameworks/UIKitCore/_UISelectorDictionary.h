//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, _UISelectorSet;

__attribute__((visibility("hidden")))
@interface _UISelectorDictionary : NSObject
{
    NSMapTable *_map;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000005d06b9
- (id)description;	// IMP=0x00000000005d06a3
- (unsigned long long)hash;	// IMP=0x00000000005d068d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005d0636
- (void)enumerateSelectorsAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000005d05a3
- (void)removeObjectsForSelectors:(id)arg1;	// IMP=0x00000000005d0538
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000000005d04cd
- (void)removeObjectForSelector:(SEL)arg1;	// IMP=0x00000000005d04bc
- (void)setObject:(id)arg1 forSelector:(SEL)arg2;	// IMP=0x00000000005d04ab
- (id)objectForSelector:(SEL)arg1;	// IMP=0x00000000005d049a
@property(readonly, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) _UISelectorSet *allSelectors;
@property(readonly, nonatomic) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005d0372
- (id)initWithMapping:(CDUnknownBlockType)arg1 objects:(id)arg2;	// IMP=0x00000000005d01fe
- (id)init;	// IMP=0x00000000005d00d3
- (id)initWithMap:(id)arg1;	// IMP=0x00000000005d0068

@end

