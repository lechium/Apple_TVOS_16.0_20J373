//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSString;

@protocol PGGraphIngestPerson <NSObject>
@property(readonly, nonatomic) NSDictionary *locationsByAddressTypes;
@property(readonly, nonatomic) unsigned long long sex;
@property(readonly, nonatomic) unsigned long long ageCategory;
@property(readonly, nonatomic) unsigned long long relationship;
@property(readonly, nonatomic) NSDate *anniversaryDate;
@property(readonly, nonatomic) NSDate *potentialBirthdayDate;
@property(readonly, nonatomic) NSDate *birthdayDate;
@property(readonly, nonatomic) _Bool isMe;
@property(readonly, nonatomic) _Bool isUserCreated;
@property(readonly, nonatomic) _Bool isFavorite;
@property(readonly, nonatomic) NSString *shareParticipantLocalIdentifier;
@property(readonly, nonatomic) NSString *contactID;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSString *fullName;
@end

