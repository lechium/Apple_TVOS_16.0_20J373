//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString;

@interface ReengagementAchievementEntry : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x002000000024e266

// Remaining properties
@property(copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSDate *lastReportedDate; // @dynamic lastReportedDate;
@property(copy, nonatomic) NSNumber *percentComplete; // @dynamic percentComplete;
@property(copy, nonatomic) NSString *playerID; // @dynamic playerID;

@end

