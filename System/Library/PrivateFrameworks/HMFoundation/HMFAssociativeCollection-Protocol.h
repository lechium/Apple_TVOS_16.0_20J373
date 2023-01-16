//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSEnumerator;

@protocol HMFAssociativeCollection
@property(readonly, copy) NSArray *allValues;
@property(readonly, copy) NSArray *allKeys;
@property(readonly) unsigned long long count;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(void (^)(id, id, _Bool *))arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(void (^)(id, id, _Bool *))arg1;
- (NSEnumerator *)objectEnumerator;
- (NSEnumerator *)keyEnumerator;
- (NSArray *)objectsForKeys:(NSArray *)arg1 notFoundMarker:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
@end
