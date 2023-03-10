//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSString;

@interface IDSHomeKitCloudRelayServiceUserIDsMessage : FTIDSMessage
{
    NSArray *_responseServiceUserIDs;	// 232 = 0xe8
    NSString *_userID;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00200000006b4d00
@property(copy) NSString *userID; // @synthesize userID=_userID;
@property(copy) NSArray *responseServiceUserIDs; // @synthesize responseServiceUserIDs=_responseServiceUserIDs;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00100000006b49c0
- (id)messageBody;	// IMP=0x00100000006b48e0
- (id)bagKey;	// IMP=0x00100000006b48c0
- (id)additionalMessageHeaders;	// IMP=0x00100000006b4760
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006b4620

@end

