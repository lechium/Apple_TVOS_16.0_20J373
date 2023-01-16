//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADRapportLinkTransportOptions, NSString;

@interface _ADRapportLinkTransportOptionsMutation : NSObject
{
    ADRapportLinkTransportOptions *_base;	// 8 = 0x8
    long long _allowsAWDL;	// 16 = 0x10
    long long _allowsBLE;	// 24 = 0x18
    long long _allowsInfraWiFi;	// 32 = 0x20
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasAllowsAWDL:1;
        unsigned int hasAllowsBLE:1;
        unsigned int hasAllowsInfraWiFi:1;
    } _mutationFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000070146
- (void)setAllowsInfraWiFi:(long long)arg1;	// IMP=0x0010000000070138
- (long long)getAllowsInfraWiFi;	// IMP=0x0010000000070116
- (void)setAllowsBLE:(long long)arg1;	// IMP=0x0010000000070108
- (long long)getAllowsBLE;	// IMP=0x00100000000700e6
- (void)setAllowsAWDL:(long long)arg1;	// IMP=0x00100000000700d8
- (long long)getAllowsAWDL;	// IMP=0x00100000000700b6
- (_Bool)isDirty;	// IMP=0x00100000000700ab
- (id)initWithBase:(id)arg1;	// IMP=0x0010000000070040

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

