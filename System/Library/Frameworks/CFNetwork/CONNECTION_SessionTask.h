//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableURLRequest, NSURLRequest, NSURLSession, NSURLSessionConfiguration, NSUUID, __CFN_TaskMetrics;

@interface CONNECTION_SessionTask : NSObject
{
    struct _CFURLRequest *_originalRequest;	// 8 = 0x8
    struct _CFURLRequest *_currentRequest;	// 16 = 0x10
    double _startTime;	// 24 = 0x18
    struct __CFDictionary *_connectionProperties;	// 32 = 0x20
    struct __CFDictionary *_socketProperties;	// 40 = 0x28
    NSMutableURLRequest *_nsCurrentRequest;	// 48 = 0x30
    NSURLRequest *_nsOriginalRequest;	// 56 = 0x38
    NSURLSession *_session_ivar;	// 64 = 0x40
    NSURLSessionConfiguration *_effectiveConfiguration;	// 72 = 0x48
    NSUUID *_uniqueIdentifier;	// 80 = 0x50
    _Bool _is_cellular;	// 88 = 0x58
    Class _my_protocolForTask;	// 96 = 0x60
    _Bool __shouldSkipPreferredClientCertificateLookup;	// 104 = 0x68
    struct __CFDictionary *_atsStateCache;	// 112 = 0x70
    _Bool _preventsAppSSO;	// 120 = 0x78
    _Bool _appSSOFallback;	// 121 = 0x79
    _Bool _appleIDContextRedirect;	// 122 = 0x7a
    __CFN_TaskMetrics *_metrics;	// 128 = 0x80
}

@property(retain, nonatomic) __CFN_TaskMetrics *_metrics; // @synthesize _metrics;
- (int)_requiresDNSSECValidation;	// IMP=0x00000000002445ce
- (id)_cookieTransformCallback;	// IMP=0x00000000002445c6
- (id)_resolvedCNAMEChain;	// IMP=0x00000000002445be
- (void)set_resolvedCNAMEChain:(id)arg1;	// IMP=0x00000000002445b8
- (void)set_connectionIsCompanionLink:(_Bool)arg1;	// IMP=0x00000000002445b2
- (_Bool)_connectionIsCompanionLink;	// IMP=0x00000000002445aa
- (id)_httpConnectionInfoCompletionBlock;	// IMP=0x00000000002445a2
- (void)set_expectedProgressTarget:(unsigned long long)arg1;	// IMP=0x000000000024459c
- (unsigned long long)_expectedProgressTarget;	// IMP=0x0000000000244594
- (id)_uniqueIdentifier;	// IMP=0x0000000000244576
- (_Bool)_isTopLevelNavigation;	// IMP=0x0000000000244549
- (id)_siteForCookies;	// IMP=0x000000000024452c
- (id)_hostOverride;	// IMP=0x0000000000244524
- (id)_APSRelayTopic;	// IMP=0x000000000024451c
- (id)_incompleteCurrentTaskTransactionMetrics;	// IMP=0x0000000000244514
- (id)_incompleteTaskMetrics;	// IMP=0x000000000024450c
- (_Bool)_preconnect;	// IMP=0x0000000000244504
- (void)didReceiveInformationalResponse:(id)arg1;	// IMP=0x00000000002444fe
- (void)set_preconnect:(_Bool)arg1;	// IMP=0x00000000002444f8
- (void)_consumePendingBytesReceivedEncoded;	// IMP=0x00000000002444f2
- (void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1;	// IMP=0x00000000002444ec
- (long long)_discretionaryOverrride;	// IMP=0x00000000002444e4
- (void)set_discretionaryOverride:(long long)arg1;	// IMP=0x00000000002444de
- (_Bool)_allowsQUIC;	// IMP=0x00000000002444d6
- (void)set_allowsQUIC:(_Bool)arg1;	// IMP=0x00000000002444d0
- (void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1;	// IMP=0x00000000002444ca
- (unsigned short)_TLSMaximumSupportedProtocolVersion;	// IMP=0x00000000002444c2
- (void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x00000000002444bc
- (unsigned short)_TLSMinimumSupportedProtocolVersion;	// IMP=0x00000000002444b4
- (void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x00000000002444ae
- (void)set_TCPConnectionMetadata:(id)arg1;	// IMP=0x00000000002444a8
- (id)_storagePartitionIdentifier;	// IMP=0x000000000024442a
- (void)set_trailers:(id)arg1;	// IMP=0x0000000000244424
- (id)_trailers;	// IMP=0x000000000024441c
- (unsigned short)_TLSNegotiatedCipherSuite;	// IMP=0x0000000000244414
- (const struct __CFData **)_TCPConnectionMetadata;	// IMP=0x000000000024440c
- (const struct __CFDictionary **)_DuetActivityProperties;	// IMP=0x0000000000244404
- (struct __CFDictionary *)_dependencyInfo;	// IMP=0x00000000002443fc
- (struct __CFDictionary *)_copyATSState;	// IMP=0x00000000002443e5
- (struct __CFSet *)_getAuthenticatorStatusCodes;	// IMP=0x00000000002443dd
- (void)_getAuthenticationHeadersForResponse:(struct _CFURLResponse *)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002443c6
- (void)_setAppleIDContext:(id)arg1;	// IMP=0x00000000002443c0
- (_Bool)_appleIDContextRedirect;	// IMP=0x00000000002443b8
- (void)set_appSSOFallback:(_Bool)arg1;	// IMP=0x00000000002443af
- (_Bool)_appSSOFallback;	// IMP=0x00000000002443a6
- (void)set_preventsAppSSO:(_Bool)arg1;	// IMP=0x000000000024439d
- (_Bool)_preventsAppSSO;	// IMP=0x0000000000244394
- (_Bool)_requiresSecureHTTPSProxyConnection;	// IMP=0x000000000024438c
- (_Bool)_preventsSystemHTTPProxyAuthentication;	// IMP=0x0000000000244384
- (_Bool)_cacheOnly;	// IMP=0x000000000024437c
- (_Bool)_shouldSkipPreferredClientCertificateLookup;	// IMP=0x0000000000244373
- (id)_protocolForTask;	// IMP=0x0000000000244369
- (void)set_protocolForTask:(id)arg1;	// IMP=0x000000000024435f
- (void)_setConnectionIsCellular:(_Bool)arg1;	// IMP=0x0000000000244356
- (_Bool)prefersIncrementalDelivery;	// IMP=0x000000000024434e
- (float)priority;	// IMP=0x0000000000244340
- (void)_releasePreventIdleSleepAssertionIfAppropriate;	// IMP=0x000000000024433a
- (void)_takePreventIdleSleepAssertionIfAppropriate;	// IMP=0x0000000000244334
- (double)_timeoutInterval;	// IMP=0x0000000000244318
- (long long)_bytesPerSecondLimit;	// IMP=0x0000000000244310
- (long long)_suspensionThreshhold;	// IMP=0x00000000002442da
- (unsigned char)_strictContentLength;	// IMP=0x00000000002442a0
- (struct __CFDictionary *)_sslSettings;	// IMP=0x0000000000244285
- (unsigned char)_shouldUsePipelineHeuristics;	// IMP=0x0000000000244254
- (unsigned char)_shouldSkipPipelineProbe;	// IMP=0x0000000000244223
- (unsigned char)_shouldPipelineHTTP;	// IMP=0x0000000000244135
- (long long)_requestPriority;	// IMP=0x000000000024411a
- (void)set_proxyHandshakePending:(_Bool)arg1;	// IMP=0x0000000000244114
- (unsigned char)_proxyHandshakePending;	// IMP=0x000000000024410c
- (struct __CFDictionary *)_proxySettings;	// IMP=0x00000000002440f1
- (unsigned char)_preventsIdleSystemSleep;	// IMP=0x00000000002440d0
- (unsigned long long)_cachePolicy;	// IMP=0x00000000002440b5
- (unsigned long long)_allowedProtocolTypes;	// IMP=0x000000000024409a
- (id)_prohibitPrivacyProxy;	// IMP=0x0000000000244092
- (id)_privacyProxyFailClosedForUnreachableNonMainHosts;	// IMP=0x000000000024408a
- (id)_privacyProxyFailClosed;	// IMP=0x0000000000244082
- (id)_trackerContext;	// IMP=0x000000000024407a
- (id)_isKnownTracker;	// IMP=0x0000000000244072
- (id)_attribution;	// IMP=0x000000000024406a
- (id)_timeWindowDuration;	// IMP=0x0000000000244062
- (id)_timeWindowDelay;	// IMP=0x000000000024405a
- (id)_assumesHTTP3Capable;	// IMP=0x0000000000244052
- (id)_allowsCellularOverride;	// IMP=0x000000000024404a
- (id)_allowsConstrainedOverride;	// IMP=0x0000000000244042
- (id)_allowsExpensiveOverride;	// IMP=0x000000000024403a
- (id)_disallowCellular;	// IMP=0x0000000000244032
- (id)_boundInterfaceIdentifier;	// IMP=0x000000000024402a
- (id)_prohibitAuthUI;	// IMP=0x0000000000244022
- (id)_networkServiceType;	// IMP=0x000000000024401a
- (id)_allowsCellular;	// IMP=0x0000000000244012
- (id)_shouldHandleCookies;	// IMP=0x000000000024400a
- (id)_cfCookies;	// IMP=0x0000000000244002
- (id)_cfCreds;	// IMP=0x0000000000243ffa
- (id)_cfCache;	// IMP=0x0000000000243ff2
- (id)_cfHSTS;	// IMP=0x0000000000243fea
- (id)_backgroundTransactionMetrics;	// IMP=0x0000000000243fe2
- (int)_cookieAcceptPolicy;	// IMP=0x0000000000243fa2
- (_Bool)hasExtractor;	// IMP=0x0000000000243f9a
- (id)_connectionPropertyDuet;	// IMP=0x0000000000243f92
- (double)startTime;	// IMP=0x0000000000243f87
- (id)_priorityValue;	// IMP=0x0000000000243f7f
- (id)error;	// IMP=0x0000000000243f77
- (id)state;	// IMP=0x0000000000243f6f
- (id)countOfBytesExpectedToReceive;	// IMP=0x0000000000243f67
- (id)countOfBytesExpectedToSend;	// IMP=0x0000000000243f5f
- (id)countOfBytesSent;	// IMP=0x0000000000243f57
- (id)_countOfBytesReceivedEncoded;	// IMP=0x0000000000243f4f
- (id)_countOfPendingBytesReceivedEncoded;	// IMP=0x0000000000243f47
- (id)countOfBytesReceived;	// IMP=0x0000000000243f3f
- (id)taskIdentifier;	// IMP=0x0000000000243f37
- (struct __CFURL *)currentRequest_mainDocumentURL;	// IMP=0x0000000000243f1c
- (struct __CFURL *)currentRequest_URL;	// IMP=0x0000000000243f01
- (id)originalRequest;	// IMP=0x0000000000243ec4
- (id)currentRequest;	// IMP=0x0000000000243e87
- (id)workQueue;	// IMP=0x0000000000243e70
- (id)session;	// IMP=0x0000000000243e66
- (_Bool)shouldHandleCookiesAndSchemeIsAppropriate;	// IMP=0x0000000000243e1e
- (void)_setConnectionCacheKey:(void *)arg1;	// IMP=0x0000000000243e18
- (void)_setSocketProperties:(struct __CFDictionary *)arg1 connectionProperties:(struct __CFDictionary *)arg2;	// IMP=0x0000000000243e12
- (const struct XCredentialStorage *)_createXCredentialStorage;	// IMP=0x0000000000243d6c
- (const struct XCookieStorage *)_createXCookieStorage;	// IMP=0x0000000000243c6c
- (void)_withXURLCache:(CDUnknownBlockType)arg1;	// IMP=0x0000000000243ba9
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;	// IMP=0x0000000000243b00
- (void)_processConnectionProperties;	// IMP=0x0000000000243a4f
- (id)_backtrace;	// IMP=0x0000000000243a47
- (id)_description;	// IMP=0x0000000000243a35
- (id)_loggableDescription;	// IMP=0x0000000000243a0c
- (struct __CFDictionary *)_copySocketStreamProperties;	// IMP=0x00000000002439f5
- (void)updateCurrentRequest:(id)arg1;	// IMP=0x00000000002439ae
- (void)_adoptEffectiveConfiguration:(id)arg1;	// IMP=0x000000000024397a
- (id)_effectiveConfiguration;	// IMP=0x0000000000243970
- (id)_private_nw_activity;	// IMP=0x0000000000243968
- (void)dealloc;	// IMP=0x0000000000243864
- (id)initWithRequest:(struct _CFURLRequest *)arg1 mutableCurrent:(struct _CFURLRequest *)arg2 connProps:(struct __CFDictionary *)arg3 sockProps:(struct __CFDictionary *)arg4 session:(id)arg5;	// IMP=0x0000000000243696
@property(readonly, nonatomic) _Bool _isAVAssetTask;

@end
