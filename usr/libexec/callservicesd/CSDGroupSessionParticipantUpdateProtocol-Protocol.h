//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSUUID;

@protocol CSDGroupSessionParticipantUpdateProtocol <NSObject>
@property(nonatomic, readonly) _Bool couldBroadcastLocalData;
@property(nonatomic, readonly) _Bool isInitiator;
@property(nonatomic, readonly) NSDictionary *participantIDs;
@property(nonatomic, readonly) NSArray *members;
@property(nonatomic, readonly) NSData *clientContextData;
@property(nonatomic, readonly) NSData *participantData;
@property(nonatomic, readonly) NSDate *serverDate;
@property(nonatomic, readonly) _Bool fromServer;
@property(nonatomic, readonly) unsigned long long participantUpdateSubtype;
@property(nonatomic, readonly) unsigned long long participantUpdateType;
// Error: Property attributes should begin with the type ('T') attribute, property name: participantDestinationID
// Property attributes: (null)

@property(nonatomic, readonly) unsigned long long participantIdentifier;
@property(nonatomic, readonly) NSUUID *groupUUID;
@end

