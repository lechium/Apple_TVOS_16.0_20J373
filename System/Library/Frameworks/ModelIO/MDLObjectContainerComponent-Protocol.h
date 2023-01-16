//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ModelIO/MDLComponent-Protocol.h>
#import <ModelIO/NSFastEnumeration-Protocol.h>

@class MDLObject, NSArray;

@protocol MDLObjectContainerComponent <MDLComponent, NSFastEnumeration>
@property(readonly, retain, nonatomic) NSArray *objects;
@property(readonly) unsigned long long count;
- (MDLObject *)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeObject:(MDLObject *)arg1;
- (void)addObject:(MDLObject *)arg1;
@end
