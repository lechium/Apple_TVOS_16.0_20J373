//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class GKCDContactInfoList, NSString;

@interface GKCDContactInfo : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x001000000024dfc6

// Remaining properties
@property(copy, nonatomic) NSString *contactID; // @dynamic contactID;
@property(copy, nonatomic) NSString *familyName; // @dynamic familyName;
@property(copy, nonatomic) NSString *givenName; // @dynamic givenName;
@property(copy, nonatomic) NSString *handle; // @dynamic handle;
@property(retain, nonatomic) GKCDContactInfoList *list; // @dynamic list;
@property(copy, nonatomic) NSString *namePrefix; // @dynamic namePrefix;
@property(copy, nonatomic) NSString *nameSuffix; // @dynamic nameSuffix;
// Error: Property attributes should begin with the type ('T') attribute, property name: nickname
// Property attributes: (null)


@end

