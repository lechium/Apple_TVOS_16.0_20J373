//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@class ML3DatabaseConnection, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ML3SortMapFaultingEntryArray : NSMutableArray
{
    ML3DatabaseConnection *_connection;	// 8 = 0x8
    NSMutableDictionary *_dirtyInserts;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008efb6
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000008ef2d
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008ed63
- (void)removeLastObject;	// IMP=0x000000000008ec7c
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000008eb15
- (void)addObject:(id)arg1;	// IMP=0x000000000008ea81
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008e772
- (unsigned long long)count;	// IMP=0x000000000008e6f9

@end
