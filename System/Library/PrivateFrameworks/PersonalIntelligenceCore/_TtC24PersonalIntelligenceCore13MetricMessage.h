//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC24PersonalIntelligenceCore13MetricMessage : NSObject
{
    MISSING_TYPE *backend;	// 8 = 0x8
    MISSING_TYPE *messageIdentifier;	// 16 = 0x10
    MISSING_TYPE *messageContents;	// 32 = 0x20
    MISSING_TYPE *dataVersion;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_codableArray;	// 48 = 0x30
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00100000000050be
- (void).cxx_destruct;	// IMP=0x00000000000053e2
- (id)init;	// IMP=0x00000000000053af
- (id)json;	// IMP=0x0000000000005315
- (id)serialize;	// IMP=0x00000000000051be
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) unsigned int dataVersion; // @synthesize dataVersion;

@end

