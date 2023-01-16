//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPerson.h>

@class NSString;
@protocol PVFaceProtocol;

@interface PHPerson (PVPersonProtocol)
- (id)personLocalIdentifiers;	// IMP=0x00200000000b061f
- (void)pv_addMergeCandidatePersons:(id)arg1;	// IMP=0x00200000000b05a3
@property(retain, nonatomic) id <PVFaceProtocol> keyFace;
@property(nonatomic) long long manualOrder;
@property(nonatomic) _Bool isVerified; // @dynamic isVerified;
@property(readonly, nonatomic) _Bool favorite;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) NSString *anonymizedName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long faceCount;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long verifiedType;
@end
