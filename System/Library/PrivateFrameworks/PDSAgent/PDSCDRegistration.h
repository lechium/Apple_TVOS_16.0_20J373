//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString, PDSCDUser;

__attribute__((visibility("hidden")))
@interface PDSCDRegistration : NSManagedObject
{
}

+ (id)uniquenessPredicateForEntry:(id)arg1;	// IMP=0x006000000001a858
+ (id)registrationsWithState:(unsigned char)arg1;	// IMP=0x006000000001a834
+ (id)registrationsForClientID:(id)arg1;	// IMP=0x006000000001a80f
+ (id)activeRegistrationsForClientID:(id)arg1;	// IMP=0x006000000001a7e4
+ (id)activeRegistrations;	// IMP=0x006000000001a7bd
+ (id)pendingRegistrations;	// IMP=0x006000000001a796
+ (id)registrationFromEntry:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x006000000001a5fb
+ (id)insertIntoManagedObjectContext:(id)arg1;	// IMP=0x006000000001a560
+ (id)fetchRequest;	// IMP=0x006000000001a540
- (id)entryWithUserCache:(id)arg1;	// IMP=0x000000000001a97d

// Remaining properties
@property(copy, nonatomic) NSString *clientID; // @dynamic clientID;
@property(nonatomic) short entryState; // @dynamic entryState;
@property(nonatomic) short environment; // @dynamic environment;
@property(copy, nonatomic) NSString *qualifier; // @dynamic qualifier;
@property(retain, nonatomic) NSString *topic; // @dynamic topic;
@property(retain, nonatomic) PDSCDUser *user; // @dynamic user;

@end

