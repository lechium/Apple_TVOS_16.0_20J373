//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATAudioSessionPropertyManager, AVAudioSession;

__attribute__((visibility("hidden")))
@interface ATAudioSessionClientImpl : NSObject
{
    AVAudioSession *_weakSession;	// 8 = 0x8
    AVAudioSession *_strongSession;	// 16 = 0x10
    ATAudioSessionPropertyManager *_propertyManager;	// 24 = 0x18
    struct unique_ptr<AudioSessionPropertyListeners, std::default_delete<AudioSessionPropertyListeners>> _propertyListeners;	// 32 = 0x20
    struct map<std::string, std::shared_ptr<OldNotificationCenterObserver>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<OldNotificationCenterObserver>>>> _oldNotificationCenterObservers;	// 40 = 0x28
    struct map<std::string, std::shared_ptr<NewNotificationCenterObserver>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<NewNotificationCenterObserver>>>> _newNotificationCenterObservers;	// 64 = 0x40
    struct ObjectRef<__CFRunLoop *> _clientRunLoop;	// 88 = 0x58
    struct StringRef _clientRunLoopMode;	// 96 = 0x60
    _Bool _isConfigured;	// 104 = 0x68
    unsigned int _interruptionType;	// 108 = 0x6c
    CDUnknownFunctionPointerType _clientInterruptionListenerProc;	// 112 = 0x70
    void *_clientUserData;	// 120 = 0x78
}

- (id).cxx_construct;	// IMP=0x00000000000060f4
- (void).cxx_destruct;	// IMP=0x000000000000606d
@property _Bool isConfigured; // @synthesize isConfigured=_isConfigured;
@property void *clientUserData; // @synthesize clientUserData=_clientUserData;
@property CDUnknownFunctionPointerType clientInterruptionListenerProc; // @synthesize clientInterruptionListenerProc=_clientInterruptionListenerProc;
@property unsigned int interruptionType; // @synthesize interruptionType=_interruptionType;
- (void)callPropertyListeners:(unsigned int)arg1 data:(id)arg2;	// IMP=0x0000000000005c82
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000005b62
- (void)handleServerReset:(id)arg1;	// IMP=0x0000000000005a8c
- (void)handleServerDeath:(id)arg1;	// IMP=0x0000000000005974
- (void)handleRouteChange:(id)arg1;	// IMP=0x0000000000005659
- (void)handleInterruption:(id)arg1;	// IMP=0x0000000000005214
- (void)removeAVAudioSessionKVOObservers:(unsigned int)arg1;	// IMP=0x0000000000004ef5
- (void)addAVAudioSessionKVOObservers:(unsigned int)arg1 session:(id)arg2;	// IMP=0x0000000000004cec
- (void)addNSNotificationListenerFor:(id)arg1 session:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000048bf
- (void)addNSNotificationListenerFor:(id)arg1 session:(id)arg2 selector:(SEL)arg3;	// IMP=0x000000000000447d
- (int)AudioSessionRemovePropertyListenerWithUserDataImpl:(unsigned int)arg1 userProc:(CDUnknownFunctionPointerType)arg2 userData:(void *)arg3;	// IMP=0x00000000000040c0
- (int)AudioSessionRemovePropertyListenerImpl:(unsigned int)arg1;	// IMP=0x0000000000003cd0
- (int)AudioSessionAddPropertyListenerImpl:(unsigned int)arg1 userProc:(CDUnknownFunctionPointerType)arg2 userData:(void *)arg3;	// IMP=0x000000000000344f
- (int)AudioSessionGetPropertySizeImpl:(unsigned int)arg1 size:(unsigned int *)arg2;	// IMP=0x0000000000003367
- (int)AudioSessionSetPropertyImpl:(unsigned int)arg1 size:(unsigned int)arg2 data:(const void *)arg3;	// IMP=0x00000000000031ce
- (int)AudioSessionGetPropertyImpl:(unsigned int)arg1 size:(unsigned int *)arg2 data:(void *)arg3;	// IMP=0x0000000000003035
- (int)AudioSessionSetActiveImpl:(unsigned char)arg1 flags:(unsigned int)arg2;	// IMP=0x0000000000002d39
@property(readonly) AVAudioSession *avas;
- (int)resetClientConfiguration;	// IMP=0x0000000000002c2b
- (int)setClientConfiguration:(struct __CFRunLoop *)arg1 runLoopMode:(const struct __CFString *)arg2 listenerProc:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4;	// IMP=0x0000000000002833
- (_Bool)isValid;	// IMP=0x000000000000280c
- (id)initWithStrongSession:(id)arg1;	// IMP=0x000000000000279b
- (id)initWithSession:(id)arg1;	// IMP=0x000000000000255a

@end

