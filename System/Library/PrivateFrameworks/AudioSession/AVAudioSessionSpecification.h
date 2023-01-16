//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVAudioSessionSpecification : NSObject
{
    unsigned int siblingID;	// 8 = 0x8
    unsigned long long sessionType;	// 16 = 0x10
    NSString *clientIdentifier;	// 24 = 0x18
    CDStruct_4c969caf _clientAuditToken;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000025223
- (void).cxx_destruct;	// IMP=0x00000000000254d7
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier;
@property(nonatomic) unsigned int siblingID; // @synthesize siblingID;
@property(nonatomic) CDStruct_4c969caf clientAuditToken; // @synthesize clientAuditToken=_clientAuditToken;
@property(nonatomic) unsigned long long sessionType; // @synthesize sessionType;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025316
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002522b

@end

