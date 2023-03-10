//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SOSAccount;

@interface SOSCircleStorageTransport : NSObject
{
    SOSAccount *account;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000020e607
@property(retain, nonatomic) SOSAccount *account; // @synthesize account;
- (struct __CFArray *)handleCircleMessagesAndReturnHandledCopy:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000020e5cf
- (struct __CFDictionary *)handleRetirementMessages:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000020e5ab
- (_Bool)postRetirement:(struct __CFString *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000020e5a3
- (_Bool)postCircle:(struct __CFString *)arg1 circleData:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000020e59b
- (_Bool)flushChanges:(struct __CFError **)arg1;	// IMP=0x001000000020e593
- (_Bool)expireRetirementRecords:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000020e58b
- (long long)getTransportType;	// IMP=0x001000000020e583
- (long long)circleGetTypeID;	// IMP=0x001000000020e57b
- (id)getAccount;	// IMP=0x001000000020e569
- (id)initWithAccount:(id)arg1;	// IMP=0x001000000020e501
- (id)init;	// IMP=0x001000000020e4d2

@end

