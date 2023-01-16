//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface PGSongSourceEntry : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000000f8160

// Remaining properties
@property(nonatomic, copy) NSString *category; // @dynamic category;
@property(nonatomic, copy) NSDate *date; // @dynamic date;
@property(nonatomic, copy) NSDate *dateLastUpdated; // @dynamic dateLastUpdated;
@property(nonatomic, copy) NSString *geohash; // @dynamic geohash;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic, copy) NSSet *songs; // @dynamic songs;
@property(nonatomic, copy) NSString *version; // @dynamic version;

@end

