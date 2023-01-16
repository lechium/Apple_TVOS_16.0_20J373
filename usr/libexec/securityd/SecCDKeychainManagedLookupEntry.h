//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface SecCDKeychainManagedLookupEntry : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00200000001d82d6

// Remaining properties
@property(copy, nonatomic) NSString *itemTypeName; // @dynamic itemTypeName;
@property(copy, nonatomic) NSString *lookupKey; // @dynamic lookupKey;
@property(copy, nonatomic) NSString *lookupValue; // @dynamic lookupValue;
@property(copy, nonatomic) NSString *lookupValueType; // @dynamic lookupValueType;
@property(retain, nonatomic) NSSet *matchingItems; // @dynamic matchingItems;
@property(nonatomic) _Bool systemEntry; // @dynamic systemEntry;

@end

