//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface SecCDKeychainManagedAccessControlEntity : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00200000001d8276

// Remaining properties
@property(retain, nonatomic) NSSet *accessedItems; // @dynamic accessedItems;
@property(retain, nonatomic) NSSet *ownedItems; // @dynamic ownedItems;
@property(copy, nonatomic) NSString *stringRepresentation; // @dynamic stringRepresentation;
@property(nonatomic) int type; // @dynamic type;

@end
