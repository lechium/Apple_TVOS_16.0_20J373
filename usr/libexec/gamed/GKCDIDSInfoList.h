//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet;

@interface GKCDIDSInfoList : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x001000000024e1c6

// Remaining properties
@property(retain, nonatomic) NSSet *entries; // @dynamic entries;
@property(copy, nonatomic) NSNumber *updateIntervalHandlesCount; // @dynamic updateIntervalHandlesCount;
@property(copy, nonatomic) NSDate *updateIntervalStartTimeStamp; // @dynamic updateIntervalStartTimeStamp;

@end
