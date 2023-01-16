//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSiriRequest.h>

@class SABaseClientBoundCommand;

@interface ADAcePassthroughSiriRequest : AFSiriRequest
{
    SABaseClientBoundCommand *_clientBoundCommand;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000fb6da
- (void).cxx_destruct;	// IMP=0x00100000000fb7fa
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000fb75f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000fb6e2
- (id)createResponseWithReplyCommand:(id)arg1;	// IMP=0x00100000000fb60a
- (id)clientBoundCommand;	// IMP=0x00100000000fb5f5
- (id)initWithClientBoundCommand:(id)arg1;	// IMP=0x00100000000fb587
- (void)_ad_handleAceDomainSignalRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000272788
- (id)_ad_preheatableServiceDomainForDomainSignalRequest;	// IMP=0x0010000000272738

@end

