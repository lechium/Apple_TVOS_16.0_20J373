//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNMutableContact.h>

@class NSArray;

@interface CNMutableContact (UIAdditions)
- (void)removePhoto;	// IMP=0x0030000000082fea
@property(copy, nonatomic) NSArray *birthdays;
- (_Bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3;	// IMP=0x0030000000082b5d
- (void)updateContactType:(_Bool)arg1;	// IMP=0x00300000000829cf
- (id)addProperties:(id)arg1 excludingProperties:(id)arg2 fromContact:(id)arg3;	// IMP=0x0030000000082205
- (_Bool)hasNonPersistedData;	// IMP=0x00300000000821bc
@end
