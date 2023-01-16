//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSDNSRequest;

@interface APSOutstandingTask : NSObject
{
    unsigned long long _taskType;	// 8 = 0x8
    APSDNSRequest *_dnsRequest;	// 16 = 0x10
    unsigned long long _messageId;	// 24 = 0x18
    unsigned long long _taskId;	// 32 = 0x20
    unsigned long long _taskStatus;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000002565
@property(nonatomic) unsigned long long taskStatus; // @synthesize taskStatus=_taskStatus;
@property(readonly, nonatomic) APSDNSRequest *dnsRequest; // @synthesize dnsRequest=_dnsRequest;
@property(readonly, nonatomic) unsigned long long taskType; // @synthesize taskType=_taskType;
@property(nonatomic) unsigned long long taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long messageId; // @synthesize messageId=_messageId;
- (id)initWithDNSTask:(id)arg1 messageId:(unsigned long long)arg2 taskId:(unsigned long long)arg3 taskStatus:(unsigned long long)arg4;	// IMP=0x0010000000002458
- (id)initWithDNSTask:(id)arg1;	// IMP=0x00100000000023e5

@end

