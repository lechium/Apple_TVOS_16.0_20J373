//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString;

@interface RingtonePurchase : NSManagedObject
{
}

+ (id)entityFromContext:(id)arg1;	// IMP=0x00400000000649d2
- (void)_assignToContact:(id)arg1 inContactStore:(id)arg2 withSoundIdentifier:(id)arg3;	// IMP=0x0020000000064dc4
- (void)_assignToPersonWithID:(int)arg1 withIdentifier:(id)arg2;	// IMP=0x0010000000064d50
- (void)_assignToContactWithID:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0010000000064c60
- (void)loadFromPurchase:(id)arg1;	// IMP=0x0010000000064b50
- (void)applyUserActionWithToneIdentifier:(id)arg1;	// IMP=0x0010000000064a1f

// Remaining properties
@property(retain, nonatomic) NSNumber *adamID; // @dynamic adamID;
@property(retain, nonatomic) NSString *assignToContactID; // @dynamic assignToContactID;
@property(retain, nonatomic) NSNumber *assignToPersonID; // @dynamic assignToPersonID;
@property(retain, nonatomic) NSString *assigneeToneStyle; // @dynamic assigneeToneStyle;
@property(retain, nonatomic) NSNumber *shouldMakeDefault; // @dynamic shouldMakeDefault;
@property(retain, nonatomic) NSNumber *shouldMakeDefaultTextTone; // @dynamic shouldMakeDefaultTextTone;
@property(retain, nonatomic) NSString *transactionID; // @dynamic transactionID;

@end

