//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSXPCConnection, SFAnalyticsReporter;

@interface supd : NSObject
{
    NSArray *_analyticsTopics;	// 8 = 0x8
    SFAnalyticsReporter *_reporter;	// 16 = 0x10
    NSDictionary *_topicsSamplingRates;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000d2c6
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) NSDictionary *topicsSamplingRates; // @synthesize topicsSamplingRates=_topicsSamplingRates;
@property(readonly) SFAnalyticsReporter *reporter; // @synthesize reporter=_reporter;
@property(readonly) NSArray *analyticsTopics; // @synthesize analyticsTopics=_analyticsTopics;
- (void)fixFiles:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d14c
- (void)clientStatus:(CDUnknownBlockType)arg1;	// IMP=0x001000000000cdcf
- (void)setUploadDateWith:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000cb8a
- (void)forceUploadWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c984
- (void)createChunkedLoggingJSON:(_Bool)arg1 topic:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000c529
- (void)createLoggingJSON:(_Bool)arg1 topic:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000c0ce
- (void)getSysdiagnoseDumpWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c05b
- (_Bool)checkSupdEntitlement;	// IMP=0x001000000000bfc3
- (id)stringForEventClass:(long long)arg1;	// IMP=0x001000000000bfa4
- (id)getSysdiagnoseDump;	// IMP=0x001000000000bcb6
- (id)sysdiagnoseStringForEventRecord:(id)arg1;	// IMP=0x001000000000b9c2
- (_Bool)uploadAnalyticsWithError:(id *)arg1 force:(_Bool)arg2;	// IMP=0x001000000000acda
- (id)serializeLoggingEvents:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000aa6e
- (void)performRegularlyScheduledUpload;	// IMP=0x001000000000a8fb
- (void)sendNotificationForOncePerReportSamplers;	// IMP=0x001000000000a8cb
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000000a867
- (id)initWithConnection:(id)arg1 reporter:(id)arg2;	// IMP=0x001000000000a745
- (void)setupSamplingRates;	// IMP=0x001000000000a2a0
- (void)setupTopics;	// IMP=0x0010000000009f99

@end

