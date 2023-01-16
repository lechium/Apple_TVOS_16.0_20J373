//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSInputStream, NSMutableArray, NSMutableData, NSOutputStream, NSString, UATimedPowerAssertions;
@protocol UAStreamHandlerDelegate;

@interface UAStreamHandler : NSObject
{
    _Bool _shouldStop;	// 8 = 0x8
    _Bool _shouldTryWrite;	// 9 = 0x9
    unsigned int _inMessageLength;	// 12 = 0xc
    NSInputStream *_inStream;	// 16 = 0x10
    NSOutputStream *_outStream;	// 24 = 0x18
    NSError *_streamError;	// 32 = 0x20
    id <UAStreamHandlerDelegate> _delegate;	// 40 = 0x28
    NSMutableData *_outputStreamData;	// 48 = 0x30
    long long _byteIndex;	// 56 = 0x38
    long long _outMessageTag;	// 64 = 0x40
    NSMutableData *_outMessage;	// 72 = 0x48
    NSMutableArray *_messageQueue;	// 80 = 0x50
    long long _bytesRead;	// 88 = 0x58
    long long _inMessageTag;	// 96 = 0x60
    NSData *_inMessage;	// 104 = 0x68
    NSMutableData *_inData;	// 112 = 0x70
    unsigned long long _inputState;	// 120 = 0x78
    unsigned long long _outputMode;	// 128 = 0x80
    long long _totalBytesSent;	// 136 = 0x88
    long long _totalBytesReceived;	// 144 = 0x90
    UATimedPowerAssertions *_assertionForRead;	// 152 = 0x98
    UATimedPowerAssertions *_assertionForWrite;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x002000000003d37e
@property(retain) UATimedPowerAssertions *assertionForWrite; // @synthesize assertionForWrite=_assertionForWrite;
@property(retain) UATimedPowerAssertions *assertionForRead; // @synthesize assertionForRead=_assertionForRead;
@property _Bool shouldTryWrite; // @synthesize shouldTryWrite=_shouldTryWrite;
@property _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
@property long long totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;
@property long long totalBytesSent; // @synthesize totalBytesSent=_totalBytesSent;
@property unsigned long long outputMode; // @synthesize outputMode=_outputMode;
@property unsigned long long inputState; // @synthesize inputState=_inputState;
@property(retain) NSMutableData *inData; // @synthesize inData=_inData;
@property(retain) NSData *inMessage; // @synthesize inMessage=_inMessage;
@property unsigned int inMessageLength; // @synthesize inMessageLength=_inMessageLength;
@property long long inMessageTag; // @synthesize inMessageTag=_inMessageTag;
@property long long bytesRead; // @synthesize bytesRead=_bytesRead;
@property(retain) NSMutableArray *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain) NSMutableData *outMessage; // @synthesize outMessage=_outMessage;
@property long long outMessageTag; // @synthesize outMessageTag=_outMessageTag;
@property long long byteIndex; // @synthesize byteIndex=_byteIndex;
@property(retain) NSMutableData *outputStreamData; // @synthesize outputStreamData=_outputStreamData;
@property __weak id <UAStreamHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSError *streamError; // @synthesize streamError=_streamError;
@property(retain) NSOutputStream *outStream; // @synthesize outStream=_outStream;
@property(retain) NSInputStream *inStream; // @synthesize inStream=_inStream;
- (id)trimFirstBytes:(unsigned long long)arg1 ofData:(id)arg2;	// IMP=0x001000000003d079
- (long long)tryWriteMessage;	// IMP=0x001000000003c9d4
- (long long)tryWriteRawData;	// IMP=0x001000000003c6be
- (long long)handleSpaceAvailable;	// IMP=0x001000000003c665
- (void)handleMessageRead;	// IMP=0x001000000003c52a
- (_Bool)dataHasMessage:(id)arg1;	// IMP=0x001000000003c4b6
- (void)processHeader;	// IMP=0x001000000003c3a6
- (void)handleBytesAvailable;	// IMP=0x001000000003bfcd
- (void)handleOpenCompleted;	// IMP=0x001000000003bed0
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x001000000003bc87
- (_Bool)writeMessage:(id)arg1 tag:(long long)arg2;	// IMP=0x001000000003b965
- (_Bool)writeRawData:(id)arg1;	// IMP=0x001000000003b766
- (void);	// IMP=0x001000000003b536
- (void)tryStop;	// IMP=0x001000000003b3ec
- (void)stop;	// IMP=0x001000000003b2d4
- (void)start;	// IMP=0x001000000003aeae
- (long long)queueCount;	// IMP=0x001000000003ae2f
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 delegate:(id)arg3;	// IMP=0x001000000003ac38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

