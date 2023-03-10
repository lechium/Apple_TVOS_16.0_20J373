//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACLSTypeVerifier, ACSURLSession, MISSING_TYPE, NSArray, NSDate, NSDictionary, NSMutableData, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLSessionConfiguration;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source, OS_xpc_object;

@interface AssetCacheLocatorService : NSObject
{
    _Bool _redactLogs;	// 8 = 0x8
    _Bool _skipEVCheck;	// 9 = 0x9
    _Bool _diskCacheRefreshTimerResumed;	// 10 = 0xa
    _Bool _cacheRefreshInProgress;	// 11 = 0xb
    _Bool _locateServerValidated;	// 12 = 0xc
    int _concurrentDNSResolutions;	// 16 = 0x10
    unsigned int _singleLocateTag;	// 20 = 0x14
    unsigned int _locateTag;	// 24 = 0x18
    double _affinityQueryTimeout;	// 32 = 0x20
    double _locateTimeout;	// 40 = 0x28
    double _dnsResolutionTimeout;	// 48 = 0x30
    NSURL *_locateURL;	// 56 = 0x38
    double _refreshValidityInterval;	// 64 = 0x40
    NSString *_cacheDirPath;	// 72 = 0x48
    NSString *_diskCachePlistPath;	// 80 = 0x50
    NSArray *_localhostAddresses;	// 88 = 0x58
    NSDictionary *_serverCapabilitiesTemplate;	// 96 = 0x60
    ACLSTypeVerifier *_serverCapabilitiesVerifier;	// 104 = 0x68
    NSDictionary *_serverDetailsTemplate;	// 112 = 0x70
    ACLSTypeVerifier *_serverDetailsVerifier;	// 120 = 0x78
    NSDictionary *_diskCacheTemplate;	// 128 = 0x80
    ACLSTypeVerifier *_diskCacheVerifier;	// 136 = 0x88
    NSArray *_softwareVersions;	// 144 = 0x90
    NSDate *_bootTime;	// 152 = 0x98
    NSURLSessionConfiguration *_locateSessionConfig;	// 160 = 0xa0
    NSURLSessionConfiguration *_importSessionConfig;	// 168 = 0xa8
    NSURLSessionConfiguration *_querySessionConfig;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_queue;	// 184 = 0xb8
    NSObject<OS_xpc_object> *_listenerConnection;	// 192 = 0xc0
    NSMutableDictionary *_diskCache;	// 200 = 0xc8
    NSObject<OS_dispatch_source> *_diskCacheRefreshTimer;	// 208 = 0xd0
    NSObject<OS_dispatch_semaphore> *_singleLocate;	// 216 = 0xd8
    NSOperationQueue *_locateOpQueue;	// 224 = 0xe0
    NSArray *_localAddresses;	// 232 = 0xe8
    NSArray *_gatewayIdentifiers;	// 240 = 0xf0
    NSObject<OS_dispatch_queue> *_cacheRefreshQueue;	// 248 = 0xf8
    NSMutableDictionary *_affinityCache;	// 256 = 0x100
    unsigned long long _testFlags;	// 264 = 0x108
    CDUnknownBlockType _locateCallback;	// 272 = 0x110
    NSObject<OS_dispatch_queue> *_locateCallbackQueue;	// 280 = 0x118
    NSArray *_locateFavoredServerRanges;	// 288 = 0x120
    ACSURLSession *_locateSession;	// 296 = 0x128
    unsigned long long _locateResponseCode;	// 304 = 0x130
    MISSING_TYPE *_locateResponseData;	// 312 = 0x138
    NSDate *_lastLocateDate;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x0020000000029549
@property(retain) NSDate *lastLocateDate; // @synthesize lastLocateDate=_lastLocateDate;
@property(retain) NSMutableData *locateResponseData; // @synthesize locateResponseData=_locateResponseData;
@property unsigned long long locateResponseCode; // @synthesize locateResponseCode=_locateResponseCode;
@property _Bool locateServerValidated; // @synthesize locateServerValidated=_locateServerValidated;
@property(retain) ACSURLSession *locateSession; // @synthesize locateSession=_locateSession;
@property(retain) NSArray *locateFavoredServerRanges; // @synthesize locateFavoredServerRanges=_locateFavoredServerRanges;
@property(retain) NSObject<OS_dispatch_queue> *locateCallbackQueue; // @synthesize locateCallbackQueue=_locateCallbackQueue;
@property(copy) CDUnknownBlockType locateCallback; // @synthesize locateCallback=_locateCallback;
@property unsigned int locateTag; // @synthesize locateTag=_locateTag;
@property unsigned long long testFlags; // @synthesize testFlags=_testFlags;
@property(retain) NSMutableDictionary *affinityCache; // @synthesize affinityCache=_affinityCache;
@property _Bool cacheRefreshInProgress; // @synthesize cacheRefreshInProgress=_cacheRefreshInProgress;
@property(retain) NSObject<OS_dispatch_queue> *cacheRefreshQueue; // @synthesize cacheRefreshQueue=_cacheRefreshQueue;
@property(retain) NSArray *gatewayIdentifiers; // @synthesize gatewayIdentifiers=_gatewayIdentifiers;
@property(retain) NSArray *localAddresses; // @synthesize localAddresses=_localAddresses;
@property(retain) NSOperationQueue *locateOpQueue; // @synthesize locateOpQueue=_locateOpQueue;
@property unsigned int singleLocateTag; // @synthesize singleLocateTag=_singleLocateTag;
@property(retain) NSObject<OS_dispatch_semaphore> *singleLocate; // @synthesize singleLocate=_singleLocate;
@property _Bool diskCacheRefreshTimerResumed; // @synthesize diskCacheRefreshTimerResumed=_diskCacheRefreshTimerResumed;
@property(retain) NSObject<OS_dispatch_source> *diskCacheRefreshTimer; // @synthesize diskCacheRefreshTimer=_diskCacheRefreshTimer;
@property(retain) NSMutableDictionary *diskCache; // @synthesize diskCache=_diskCache;
@property(retain) NSObject<OS_xpc_object> *listenerConnection; // @synthesize listenerConnection=_listenerConnection;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSURLSessionConfiguration *querySessionConfig; // @synthesize querySessionConfig=_querySessionConfig;
@property(retain) NSURLSessionConfiguration *importSessionConfig; // @synthesize importSessionConfig=_importSessionConfig;
@property(retain) NSURLSessionConfiguration *locateSessionConfig; // @synthesize locateSessionConfig=_locateSessionConfig;
@property(retain) NSDate *bootTime; // @synthesize bootTime=_bootTime;
@property(retain) NSArray *softwareVersions; // @synthesize softwareVersions=_softwareVersions;
@property(retain) ACLSTypeVerifier *diskCacheVerifier; // @synthesize diskCacheVerifier=_diskCacheVerifier;
@property(retain) NSDictionary *diskCacheTemplate; // @synthesize diskCacheTemplate=_diskCacheTemplate;
@property(retain) ACLSTypeVerifier *serverDetailsVerifier; // @synthesize serverDetailsVerifier=_serverDetailsVerifier;
@property(retain) NSDictionary *serverDetailsTemplate; // @synthesize serverDetailsTemplate=_serverDetailsTemplate;
@property(retain) ACLSTypeVerifier *serverCapabilitiesVerifier; // @synthesize serverCapabilitiesVerifier=_serverCapabilitiesVerifier;
@property(retain) NSDictionary *serverCapabilitiesTemplate; // @synthesize serverCapabilitiesTemplate=_serverCapabilitiesTemplate;
@property(retain) NSArray *localhostAddresses; // @synthesize localhostAddresses=_localhostAddresses;
@property(retain) NSString *diskCachePlistPath; // @synthesize diskCachePlistPath=_diskCachePlistPath;
@property(retain) NSString *cacheDirPath; // @synthesize cacheDirPath=_cacheDirPath;
@property _Bool skipEVCheck; // @synthesize skipEVCheck=_skipEVCheck;
@property double refreshValidityInterval; // @synthesize refreshValidityInterval=_refreshValidityInterval;
@property _Bool redactLogs; // @synthesize redactLogs=_redactLogs;
@property(retain) NSURL *locateURL; // @synthesize locateURL=_locateURL;
@property double dnsResolutionTimeout; // @synthesize dnsResolutionTimeout=_dnsResolutionTimeout;
@property double locateTimeout; // @synthesize locateTimeout=_locateTimeout;
@property int concurrentDNSResolutions; // @synthesize concurrentDNSResolutions=_concurrentDNSResolutions;
@property double affinityQueryTimeout; // @synthesize affinityQueryTimeout=_affinityQueryTimeout;
- (id)redactStringsFromObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028d33
- (id)redactObject:(id)arg1;	// IMP=0x0010000000028840
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000028830
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x001000000002849c
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002822a
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00100000000278cb
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002776c
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000026fa7
- (void)importToCachingServerAsURL:(id)arg1 sourcePath:(id)arg2 sourceFileHandle:(id)arg3 sourceOffset:(long long)arg4 sourceLength:(long long)arg5 method:(id)arg6 headers:(id)arg7 importStrategies:(id)arg8 entitled:(_Bool)arg9 callback:(CDUnknownBlockType)arg10 callbackQueue:(id)arg11 tag:(unsigned int)arg12;	// IMP=0x0010000000026c70
- (void)importToLocalCachingServerAsURL:(id)arg1 sourceFileHandle:(id)arg2 sourceOffset:(long long)arg3 sourceLength:(long long)arg4 method:(id)arg5 headers:(id)arg6 callback:(CDUnknownBlockType)arg7 callbackQueue:(id)arg8 tag:(unsigned int)arg9;	// IMP=0x00100000000267c9
- (void)updateHealthOfCachingServerWithHostport:(id)arg1 healthy:(_Bool)arg2 override:(_Bool)arg3 callback:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5 tag:(unsigned int)arg6;	// IMP=0x0010000000025ebb
- (void)recentlySeenCachingServerWithAutoRefresh:(_Bool)arg1 callback:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3 tag:(unsigned int)arg4;	// IMP=0x00100000000259e5
- (_Bool)isAddress:(id)arg1 inCompiledRanges:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x00100000000255f5
- (id)compileRanges:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x0010000000025013
- (id)describeCapableServers:(id)arg1 fromAvailableServers:(id)arg2 withOtherServers:(id)arg3;	// IMP=0x0010000000024b57
- (void)slowcateCachingServerWithTimeout:(double)arg1 capabilities:(id)arg2 affinityID:(id)arg3 forceRefresh:(_Bool)arg4 forceDNSRefresh:(_Bool)arg5 callback:(CDUnknownBlockType)arg6 tag:(unsigned int)arg7;	// IMP=0x0010000000022dd2
- (void)relocateCachingServersWithTimeout:(double)arg1 capabilities:(id)arg2 affinityID:(id)arg3 forceRefresh:(_Bool)arg4 tag:(unsigned int)arg5;	// IMP=0x0010000000022753
- (void)locateCachingServersWithTimeout:(double)arg1 capabilities:(id)arg2 affinityID:(id)arg3 autoRefresh:(_Bool)arg4 quickMiss:(_Bool)arg5 forceMiss:(_Bool)arg6 callback:(CDUnknownBlockType)arg7 callbackQueue:(id)arg8 tag:(unsigned int)arg9;	// IMP=0x0010000000021e78
- (int)probeCacheWithLabel:(id)arg1 capabilities:(id)arg2 affinityID:(id)arg3 hitServers:(id *)arg4 hitServersAreSorted:(_Bool *)arg5 hitOtherServers:(id *)arg6 hitValidityInterval:(double *)arg7 tag:(unsigned int)arg8;	// IMP=0x0010000000021430
- (_Bool)probeCacheForType:(id)arg1 withLabel:(id)arg2 networkIdentifiers:(id)arg3 hitServers:(id *)arg4 hitValidityInterval:(double *)arg5 tag:(unsigned int)arg6;	// IMP=0x001000000002109f
- (void)uncacheAllAffinitiesWithTag:(unsigned int)arg1;	// IMP=0x001000000002100e
- (void)queryServersFromArray:(id)arg1 forReachabilityOrAffinityID:(id)arg2 withTimeout:(double)arg3 callbackWithServers:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5 tag:(unsigned int)arg6;	// IMP=0x000000000001eaf8
- (void)cacheServers:(id)arg1 forAffinityID:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x001000000001e7a2
- (id)cachedServers:(id)arg1 forAffinityID:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x001000000001e2a2
- (void)refineServers:(id)arg1 intoBest:(id *)arg2 andOther:(id *)arg3 tag:(unsigned int)arg4;	// IMP=0x001000000001ddb1
- (id)serversFromArray:(id)arg1 withCapabilities:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x001000000001d9fe
- (_Bool)doesServer:(id)arg1 haveCapabilities:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x001000000001d52e
- (void)locateLocalCachingServersWithTimeout:(double)arg1 localAddresses:(id)arg2 gatewayIdentifiers:(id)arg3 configurationProfiles:(id)arg4 forceDNSRefresh:(_Bool)arg5 callback:(CDUnknownBlockType)arg6 callbackQueue:(id)arg7 tag:(unsigned int)arg8;	// IMP=0x001000000001c3dc
- (_Bool)parseLocateResponse:(id)arg1 withFavoredServerRanges:(id)arg2 intoServers:(id *)arg3 validityInterval:(double *)arg4 error:(id *)arg5 tag:(unsigned int)arg6;	// IMP=0x001000000001b06f
- (void)locateLocalCachingServersWithHeaders:(id)arg1 body:(id)arg2 timeout:(double)arg3 favoredServerRanges:(id)arg4 callback:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6 tag:(unsigned int)arg7;	// IMP=0x001000000001a087
- (id)locateTetheredCachingServersWithTag:(unsigned int)arg1;	// IMP=0x001000000001990b
- (void)uncacheAllRecentlySeenWithTag:(unsigned int)arg1;	// IMP=0x001000000001981f
- (void)uncacheRecentlySeenForNetworkIdentifiers:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x00100000000197f9
- (void)cacheNotRecentlySeenForNetworkIdentifiers:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x001000000001972e
- (void)cacheRecentlySeen:(_Bool)arg1 forNetworkIdentifiers:(id)arg2 validityInterval:(double)arg3 tag:(unsigned int)arg4;	// IMP=0x00100000000192de
- (void)cachedRecentlySeen:(id *)arg1 forNetworkIdentifiers:(id)arg2 validityInterval:(double *)arg3 tag:(unsigned int)arg4;	// IMP=0x001000000001925d
- (void)uncacheDNSPublicAddressRangesAndFavoredServerRangesForNetworkIdentifiers:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x0010000000019237
- (void)cacheDNSPublicAddressRanges:(id)arg1 andFavoredServerRanges:(id)arg2 forNetworkIdentifiers:(id)arg3 validityInterval:(double)arg4 tag:(unsigned int)arg5;	// IMP=0x0010000000018da8
- (void)cachedDNSPublicAddressRanges:(id *)arg1 andFavoredServerRanges:(id *)arg2 forNetworkIdentifiers:(id)arg3 tag:(unsigned int)arg4;	// IMP=0x0010000000018cb7
- (void)uncacheAllServersWithTag:(unsigned int)arg1;	// IMP=0x0010000000018bcb
- (_Bool)anyCachedServersWithTag:(unsigned int)arg1;	// IMP=0x0010000000018b36
- (void)uncacheEntriesCalled:(id)arg1 withKey:(id)arg2 forNetworkIdentifiers:(id)arg3 tag:(unsigned int)arg4;	// IMP=0x0010000000018780
- (void)uncacheServersForNetworkIdentifiers:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x001000000001875a
- (void)cacheServers:(id)arg1 forNetworkIdentifiers:(id)arg2 validityInterval:(double)arg3 tag:(unsigned int)arg4;	// IMP=0x00100000000181f4
- (id)cachedEntryCalled:(id)arg1 withKey:(id)arg2 forNetworkIdentifiers:(id)arg3 validityInterval:(double *)arg4 tag:(unsigned int)arg5;	// IMP=0x0010000000017cb2
- (void)cachedServers:(id *)arg1 forNetworkIdentifiers:(id)arg2 validityInterval:(double *)arg3 tag:(unsigned int)arg4;	// IMP=0x0010000000017c0c
- (void)updateDiskCacheRefreshTimerWithTag:(unsigned int)arg1;	// IMP=0x00100000000172c5
- (void)saveDiskCacheWithTag:(unsigned int)arg1;	// IMP=0x0010000000016ca8
- (_Bool)transferVolatileStateFromDiskCache:(id)arg1 toDiskCache:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x00100000000162ff
- (void)loadDiskCacheWithTag:(unsigned int)arg1;	// IMP=0x0010000000015333
- (id)makeBootTimeWithTag:(unsigned int)arg1;	// IMP=0x0010000000015216
- (id)sanitizeRanges:(id)arg1 fromSource:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x00100000000149e9
- (void)resolveDNSRecordsWithTimeout:(double)arg1 callback:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3 tag:(unsigned int)arg4;	// IMP=0x001000000001344b
- (void)resolveDNSRecordNamed:(id)arg1 withTimeout:(double)arg2 errorIfNotFound:(_Bool)arg3 callback:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5 tag:(unsigned int)arg6;	// IMP=0x0010000000011b16
- (id)makeRangesFromDNSRecordNamed:(id)arg1 withType:(int)arg2 data:(const char *)arg3 length:(unsigned long long)arg4 more:(_Bool *)arg5 error:(id *)arg6 tag:(unsigned int)arg7;	// IMP=0x0010000000010bd5
- (id)safeString:(const char *)arg1 length:(unsigned long long)arg2 forceHex:(_Bool)arg3;	// IMP=0x0010000000010b2a
- (_Bool)makeLocalAddresses:(id *)arg1 andGatewayIdentifiers:(id *)arg2 tag:(unsigned int)arg3;	// IMP=0x00100000000108f6
- (void)watchForNetworkChanges;	// IMP=0x0010000000010677
- (void)networkChanged;	// IMP=0x00100000000104ea
- (id)makeSoftwareVersions;	// IMP=0x001000000000fff0
- (_Bool)doesConnection:(id)arg1 haveEntitlement:(const char *)arg2;	// IMP=0x001000000000ffb5
- (_Bool)handleSetTestFlagsEvent:(id)arg1 forConnection:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x001000000000ff81
- (_Bool)handleIntrospectEvent:(id)arg1 forConnection:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x001000000000f5e8
- (_Bool)handleImportEvent:(id)arg1 forConnection:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x001000000000eb6c
- (_Bool)handleUpdateHealthEvent:(id)arg1 forConnection:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x001000000000e7ff
- (_Bool)handleRecentlySeenEvent:(id)arg1 forConnection:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x001000000000e1e6
- (_Bool)handleLocateEvent:(id)arg1 forConnection:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x001000000000ccba
- (_Bool)handleEvent:(id)arg1 forConnection:(id)arg2;	// IMP=0x001000000000c4a1
- (void)handleConnection:(id)arg1;	// IMP=0x001000000000c2d3
- (void)start;	// IMP=0x001000000000beb4
- (id)choose:(int)arg1 fromArray:(id)arg2 sorted:(_Bool)arg3 other:(id)arg4 tag:(unsigned int)arg5;	// IMP=0x001000000000b6c9
- (id)servers:(id)arg1 byAppendingServers:(id)arg2;	// IMP=0x001000000000b62f
- (id)XPCObjectFromNSObject:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x001000000000b31a
- (id)NSObjectFromXPCObject:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x001000000000afad
- (id)errorWithObject:(id)arg1 fromService:(const char *)arg2 tag:(unsigned int)arg3;	// IMP=0x001000000000ae6a
- (id)objectWithError:(id)arg1;	// IMP=0x001000000000ad64
- (_Bool)amRunningInMySingleLocate:(unsigned int)arg1;	// IMP=0x001000000000ad43
- (_Bool)amRunningOnMyQueue;	// IMP=0x001000000000acfc
- (id)systemGroupContainerPathWithGroupIdentifier:(id)arg1;	// IMP=0x001000000000ac38
- (id)init;	// IMP=0x0010000000007ca1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

