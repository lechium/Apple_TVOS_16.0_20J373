//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PGCacherStatusEntry : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000008a680

// Remaining properties
@property(nonatomic, copy) NSString *category; // @dynamic category;
@property(nonatomic, copy) NSDate *lastFailedFetchedDate; // @dynamic lastFailedFetchedDate;
@property(nonatomic, copy) NSDate *lastSuccessfulFetchedDate; // @dynamic lastSuccessfulFetchedDate;

@end

