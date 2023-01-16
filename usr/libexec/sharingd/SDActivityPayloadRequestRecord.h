//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, RPCompanionLinkClient;

@interface SDActivityPayloadRequestRecord
{
    NSData *_advertisementPayload;	// 64 = 0x40
    NSString *_command;	// 72 = 0x48
    RPCompanionLinkClient *_linkClient;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000000a8c9
@property(retain, nonatomic) RPCompanionLinkClient *linkClient; // @synthesize linkClient=_linkClient;
@property(copy, nonatomic) NSString *command; // @synthesize command=_command;
@property(copy, nonatomic) NSData *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
- (id)description;	// IMP=0x001000000000a70f
- (void)dealloc;	// IMP=0x001000000000a6c6

@end

