//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSProtocolParser, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSTimer, PCConnectionManager;
@protocol APSCourierConnectionDelegate, APSTCPStream;

@interface APSCourierConnection : NSObject
{
    NSString *_domain;	// 8 = 0x8
    id <APSTCPStream> _streams[2];	// 16 = 0x10
    APSProtocolParser *_parsers[2];	// 32 = 0x20
    NSString *_redirectHost;	// 48 = 0x30
    unsigned char _redirectCount;	// 56 = 0x38
    PCConnectionManager *_connectionManagers[2];	// 64 = 0x40
    NSMutableDictionary *_contexts[2];	// 80 = 0x50
    NSTimer *_keepAliveTimers[2];	// 96 = 0x60
    _Bool _keepAliveV2Supported[2];	// 112 = 0x70
    NSString *_usingCachedIPAddress[2];	// 120 = 0x78
    _Bool _isConnecting[2];	// 136 = 0x88
    void *_keepAlivePowerAssertions[2];	// 144 = 0x90
    NSTimer *_connectionEstablishTimers[2];	// 160 = 0xa0
    void *_connectionEstablishPowerAssertions[2];	// 176 = 0xb0
    _Bool _isDualChannelAllowed;	// 192 = 0xc0
    id <APSCourierConnectionDelegate> _delegate;	// 200 = 0xc8
    long long _lastAttemptedInterface;	// 208 = 0xd0
    _Bool _remainsConnectedWhenWWANSuspends;	// 216 = 0xd8
    NSMutableArray *_connectionAttemptsInExpensiveConditions;	// 224 = 0xe0
    _Bool _powerOptimizationsForExpensiveNetworkingDisabled;	// 232 = 0xe8
    unsigned long long _maxExpensiveConditionsConnectionAttempts;	// 240 = 0xf0
    double _expensiveConditionsBackOffInterval;	// 248 = 0xf8
    double _wifiKeepAliveEarlyFireConstantInterval;	// 256 = 0x100
    unsigned int _disconnectReason;	// 264 = 0x108
    NSDate *_lastConnected;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00200000000881f9
@property(nonatomic) double wifiKeepAliveEarlyFireConstantInterval; // @synthesize wifiKeepAliveEarlyFireConstantInterval=_wifiKeepAliveEarlyFireConstantInterval;
@property(nonatomic) double expensiveConditionsBackOffInterval; // @synthesize expensiveConditionsBackOffInterval=_expensiveConditionsBackOffInterval;
@property(nonatomic) unsigned long long maxExpensiveConditionsConnectionAttempts; // @synthesize maxExpensiveConditionsConnectionAttempts=_maxExpensiveConditionsConnectionAttempts;
@property(nonatomic) _Bool powerOptimizationsForExpensiveNetworkingDisabled; // @synthesize powerOptimizationsForExpensiveNetworkingDisabled=_powerOptimizationsForExpensiveNetworkingDisabled;
@property(nonatomic) _Bool remainsConnectedWhenWWANSuspends; // @synthesize remainsConnectedWhenWWANSuspends=_remainsConnectedWhenWWANSuspends;
@property(retain, nonatomic) NSString *redirectHost; // @synthesize redirectHost=_redirectHost;
@property(nonatomic) unsigned int disconnectReason; // @synthesize disconnectReason=_disconnectReason;
@property(retain, nonatomic) NSDate *lastConnected; // @synthesize lastConnected=_lastConnected;
@property(readonly, nonatomic) NSString *connectionDebugInfo;
- (void)tcpStreamDidFailToFindKeepAliveProxyInterface:(id)arg1;	// IMP=0x0010000000087ffa
- (void)tcpStreamDidFailToObtainKeepAliveProxy:(id)arg1;	// IMP=0x0010000000087fb6
- (void)tcpStreamDidFailToForceKeepAliveProxyInterface:(id)arg1;	// IMP=0x0010000000087f72
- (void)tcpStreamHasConnected:(id)arg1 context:(id)arg2 enabledPackedFormat:(_Bool)arg3 maxEncoderTableSize:(unsigned long long)arg4 maxDecoderTableSize:(unsigned long long)arg5 secureHandshakeEnabled:(_Bool)arg6;	// IMP=0x0010000000087e9b
- (void)tcpStream:(id)arg1 hasDeterminedServerHostname:(id)arg2;	// IMP=0x0010000000087e30
- (void)tcpStream:(id)arg1 receivedServerBag:(id)arg2;	// IMP=0x0010000000087e14
- (void)tcpStream:(id)arg1 errorOccured:(id)arg2;	// IMP=0x0010000000087cdc
- (void)tcpStreamEndEncountered:(id)arg1 withReason:(unsigned int)arg2;	// IMP=0x0010000000087c93
- (unsigned long long)tcpStream:(id)arg1 dataReceived:(id)arg2 isWakingMessage:(_Bool)arg3;	// IMP=0x0010000000087bdf
- (void)protocolParser:(id)arg1 receiveAPNSPackError:(id)arg2;	// IMP=0x0010000000087b74
- (void)connectionManager:(id)arg1 handleEvent:(int)arg2 context:(id)arg3;	// IMP=0x0010000000087ae4
- (_Bool)isPackedFormatOnInterface:(long long)arg1;	// IMP=0x0010000000087acd
- (_Bool)parseMessage:(id)arg1 parameters:(id *)arg2 isInvalid:(_Bool *)arg3 lengthParsed:(unsigned long long *)arg4 onInterface:(long long)arg5;	// IMP=0x0010000000087ab2
- (void)sendPubSubChannelListWithMetadata:(id)arg1 baseToken:(id)arg2 messageID:(unsigned int)arg3 onInterface:(long long)arg4;	// IMP=0x0010000000087979
- (void)sendTaskControlMessageWithMetadata:(id)arg1 messageId:(unsigned long long)arg2 onInterface:(long long)arg3;	// IMP=0x001000000008792b
- (_Bool)sendMessageWithTopicHash:(id)arg1 identifier:(unsigned long long)arg2 payload:(id)arg3 token:(id)arg4 isPlistFormat:(_Bool)arg5 lastRTT:(id)arg6 onInterface:(long long)arg7;	// IMP=0x00100000000878c3
- (void)sendFilterMessageWithEnabledHashes:(id)arg1 ignoredHashes:(id)arg2 opportunisticHashes:(id)arg3 nonWakingHashes:(id)arg4 pausedHashes:(id)arg5 token:(id)arg6 onInterface:(long long)arg7;	// IMP=0x0010000000087864
- (void)sendMessageTracingAckWithTopicHash:(id)arg1 tracingUUID:(id)arg2 status:(int)arg3 token:(id)arg4 onInterface:(long long)arg5;	// IMP=0x001000000008780c
- (void)sendActivityTrackingRequestWithMessageID:(unsigned long long)arg1 pushToken:(id)arg2 salt:(unsigned long long)arg3 trackingFlag:(unsigned int)arg4 timestamp:(unsigned long long)arg5 onInterface:(long long)arg6;	// IMP=0x00100000000877ad
- (void)sendTokenGenerateMessageWithTopicHash:(id)arg1 baseToken:(id)arg2 appId:(unsigned short)arg3 expirationTTL:(unsigned int)arg4 vapidPublicKeyHash:(id)arg5 type:(long long)arg6 onInterface:(long long)arg7;	// IMP=0x001000000008774e
- (void)sendKeepAliveMessageWithMetadata:(id)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000087700
- (void)sendMessageTransportAcknowledgeMessageOnInterface:(long long)arg1;	// IMP=0x00100000000876b2
- (void)sendMessageAcknowledgeMessageWithResponse:(long long)arg1 messageId:(id)arg2 token:(id)arg3 onInterface:(long long)arg4;	// IMP=0x0010000000087664
- (void)sendSetActiveState:(_Bool)arg1 forInterval:(unsigned int)arg2 onInterface:(long long)arg3;	// IMP=0x0010000000087616
- (void)sendSetActiveIntervalMessageWithInterval:(unsigned int)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000875c8
- (void)sendFlushResponseMessageWithPaddingLength:(unsigned long long)arg1 onInterface:(long long)arg2;	// IMP=0x001000000008757a
- (void)sendFlushMessageWithWantPaddingLength:(unsigned long long)arg1 paddingLength:(unsigned long long)arg2 onInterface:(long long)arg3;	// IMP=0x001000000008752c
- (void)sendConnectMessageWithToken:(id)arg1 interface:(long long)arg2 activeInterval:(unsigned int)arg3 metadata:(id)arg4 certificates:(id)arg5 nonce:(id)arg6 signature:(id)arg7 redirectCount:(unsigned char)arg8 tcpHandshakeTimeMilliseconds:(double)arg9 dnsResolveTimeMilliseconds:(double)arg10 tlsHandshakeTimeMilliseconds:(double)arg11 consecutiveConnectionFailureReason:(id)arg12 onInterface:(long long)arg13;	// IMP=0x001000000008724b
- (void)sendConnectMessageWithToken:(id)arg1 state:(int)arg2 interface:(long long)arg3 activeInterval:(unsigned int)arg4 metadata:(id)arg5 certificates:(id)arg6 nonce:(id)arg7 signature:(id)arg8 redirectCount:(unsigned char)arg9 onInterface:(long long)arg10;	// IMP=0x00100000000870dc
- (void)holdPowerAssertionUntilStreamQuiesces;	// IMP=0x001000000008707c
@property(readonly, nonatomic) _Bool didPushCauseWake;
@property(nonatomic) _Bool isDualChannelAllowed;
- (void)_handleDualModeState;	// IMP=0x0010000000086b6e
- (unsigned long long)countOfGrowthActionsOnInterface:(long long)arg1;	// IMP=0x0010000000086b4d
- (_Bool)shouldClientScheduleReconnectDueToFailureOnInterface:(long long)arg1;	// IMP=0x0010000000086b2c
- (int)currentGrowthStageOnInterface:(long long)arg1;	// IMP=0x0010000000086b0b
- (id)currentKeepAliveStateOnInterface:(long long)arg1;	// IMP=0x0010000000086a7e
- (double)currentKeepAliveIntervalOnInterface:(long long)arg1;	// IMP=0x0010000000086a5d
@property(readonly, nonatomic) double minimumKeepAliveInterval;
@property(readonly, copy, nonatomic) NSString *ifname;
- (_Bool)isKeepAliveProxyConfiguredOnInterface:(long long)arg1;	// IMP=0x00100000000869ba
- (_Bool)isKeepAliveProxySupportedOnSocketOnInterface:(long long)arg1;	// IMP=0x0010000000086999
- (_Bool)hasOpenConnectionOnInterface:(long long)arg1;	// IMP=0x0010000000086981
@property(readonly, nonatomic) _Bool hasOpenConnection;
@property(readonly, nonatomic) unsigned long long countOpenConnections;
@property(readonly, nonatomic) unsigned long long countConnectedInterfaces;
- (_Bool)isConnectedOnInterface:(long long)arg1;	// IMP=0x0010000000086897
@property(readonly, nonatomic) _Bool isConnected;
- (_Bool)generationMatches:(unsigned long long)arg1 forInterface:(long long)arg2;	// IMP=0x001000000008682b
- (_Bool)setIsConnected:(_Bool)arg1 onInterface:(long long)arg2 withDisconnectReason:(unsigned int)arg3;	// IMP=0x00100000000863b6
- (_Bool)setIsConnected:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x001000000008639e
- (id)serverHostnameForInterface:(long long)arg1;	// IMP=0x001000000008629e
- (id)serverIPAddressForInterface:(long long)arg1;	// IMP=0x001000000008619e
@property(readonly, nonatomic) long long lastAttemptedInterface;
@property(readonly, nonatomic) long long connectingInterface;
@property(readonly, nonatomic) long long preferredInterface;
@property(readonly, nonatomic) long long nextConnectionAttemptInterface;
@property(readonly, retain, nonatomic) NSString *tcpInfoDescription;
- (id)_currentStream;	// IMP=0x0010000000085fd9
@property(nonatomic) id <APSCourierConnectionDelegate> delegate;
- (id)objectForKey:(id)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000085f43
- (void)setObject:(id)arg1 forKey:(id)arg2 onInterface:(long long)arg3;	// IMP=0x0010000000085e45
- (void)_keepAliveResponseTimerFired:(id)arg1;	// IMP=0x0010000000085db7
- (void)clearKeepAliveResponseTimerOnInterface:(long long)arg1;	// IMP=0x0010000000085d56
- (void)startKeepAliveResponseTimerOnInterface:(long long)arg1 shortInterval:(_Bool)arg2;	// IMP=0x0010000000085c24
- (_Bool)hasKeepAliveResponseTimerOnInterface:(long long)arg1;	// IMP=0x0010000000085c0c
- (void)_connectionEstablishTimerFired:(id)arg1;	// IMP=0x0010000000085b78
- (void)clearConnectionEstablishTimerOnInterface:(long long)arg1;	// IMP=0x0010000000085b0e
- (void)startConnectionEstablishTimerOnInterface:(long long)arg1;	// IMP=0x00100000000859ed
- (_Bool)hasConnectionEstablishTimerOnInterface:(long long)arg1;	// IMP=0x00100000000859d2
- (_Bool)hasConnectionEstablishTimer;	// IMP=0x00100000000859b5
- (void)_updateConnectionManagerKeepAliveIntervalNonCellular;	// IMP=0x001000000008595a
- (void)__updateConnectionManagerKeepAliveIntervalNonCellular;	// IMP=0x0010000000085919
- (void)_updateConnectionManagerKeepAliveIntervalWWAN;	// IMP=0x00100000000858be
- (void)__updateConnectionManagerKeepAliveIntervalWWAN;	// IMP=0x001000000008587d
- (int)lastKeepAliveActionOnInterface:(long long)arg1;	// IMP=0x001000000008578f
- (_Bool)keepAliveV2SupportedOnInterface:(long long)arg1;	// IMP=0x00100000000856c1
- (void)setKeepAliveV2Supported:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000855ca
- (void)updateConnectionManagerKeepAliveIntervalOnInterface:(long long)arg1;	// IMP=0x00100000000854cc
- (void)setEnableNonCellularOnConnectionManager:(_Bool)arg1;	// IMP=0x00100000000854b6
- (void)setMinimumIntervalFallbackEnabled:(_Bool)arg1;	// IMP=0x0010000000085476
- (void)setKeepAliveGracePeriod:(double)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000085373
- (double)keepAliveGracePeriodOnInterface:(long long)arg1;	// IMP=0x0010000000085284
- (void)setUsingServerStatsAggressively:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x001000000008516b
- (void)setServerStatsExpectedKeepAlive:(double)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000085068
- (void)setServerStatsMinKeepAlive:(double)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000084f65
- (void)setServerStatsMaxKeepAlive:(double)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000084e62
- (void)resumeManagerWithAction:(int)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000084cd1
- (_Bool)isExpensiveToUseInterface:(long long)arg1;	// IMP=0x0010000000084c8d
- (id)pcInterfaceMonitorOnInterface:(long long)arg1;	// IMP=0x0010000000084c49
- (id)pcInterfaceMonitorNonCellular;	// IMP=0x0010000000084c32
- (id)pcInterfaceMonitorWWAN;	// IMP=0x0010000000084c1e
- (void)stopAndResetManagerOnInterface:(long long)arg1;	// IMP=0x0010000000084ab5
- (void)stopManagerOnInterface:(long long)arg1;	// IMP=0x001000000008494c
- (void)stopManagers;	// IMP=0x0000000000084911
- (void)closeStreamForInterface:(long long)arg1;	// IMP=0x00100000000848a4
- (void)writeDataInBackground:(id)arg1;	// IMP=0x001000000008484f
- (void)writeDataInBackground:(id)arg1 onInterface:(long long)arg2;	// IMP=0x001000000008474f
- (Class)tcpStreamClass;	// IMP=0x001000000008473e
- (void)connectToEnvironment:(id)arg1 onInterface:(long long)arg2 withIdentity:(struct __SecIdentity *)arg3 useAlternatePort:(_Bool)arg4 forceKeepAliveProxy:(_Bool)arg5;	// IMP=0x0010000000084340
- (_Bool)shouldConnectOnInterface:(long long)arg1;	// IMP=0x0010000000083edc
- (void)setKeepAliveIntervalOverrideOnAudioAccessory;	// IMP=0x0010000000083e00
- (_Bool)isSuspendedOnInterface:(long long)arg1;	// IMP=0x0010000000083cf3
- (void)setIsSuspended:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000083bda
- (void)setIsConnecting:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000083ae5
- (_Bool)isConnectingOnInterface:(long long)arg1;	// IMP=0x0010000000083acb
- (void)setUsingCachedIPAddress:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000839c0
- (id)usingCachedIPAddressOnInterface:(long long)arg1;	// IMP=0x001000000008399b
- (unsigned char)redirectCount;	// IMP=0x0010000000083991
- (void)clearRedirectCount;	// IMP=0x0010000000083987
- (void)incrementRedirectCount;	// IMP=0x001000000008397e
- (long long)_interfaceForConnectionManager:(id)arg1;	// IMP=0x001000000008395e
- (long long)_interfaceForStream:(id)arg1;	// IMP=0x001000000008393e
- (long long)_interfaceForProtocolParser:(id)arg1;	// IMP=0x001000000008391e
- (void)dealloc;	// IMP=0x00100000000837fa
- (id)initWithEnvironment:(id)arg1;	// IMP=0x001000000008359b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

