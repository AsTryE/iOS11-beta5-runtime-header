/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWAWDNWConnectionReport : PBCodable <NSCopying> {
    int  _appleApp;
    int  _appleHost;
    unsigned long long  _bestRTT;
    unsigned long long  _bytesDuplicate;
    unsigned long long  _bytesIn;
    unsigned long long  _bytesOut;
    unsigned long long  _bytesOutOfOrder;
    unsigned long long  _bytesRetransmitted;
    int  _connectedAddressFamily;
    unsigned long long  _connectedAddressIndex;
    int  _connectedInterfaceType;
    int  _connectionMode;
    unsigned long long  _connectionReuseCount;
    unsigned long long  _currentRTT;
    bool  _customProxyConfigured;
    unsigned long long  _dataStallCount;
    int  _failureReason;
    bool  _fallbackEligible;
    int  _firstAddressFamily;
    bool  _firstParty;
    unsigned long long  _flowConnectMilliseconds;
    unsigned long long  _flowDurationMilliseconds;
    struct { 
        unsigned int bestRTT : 1; 
        unsigned int bytesDuplicate : 1; 
        unsigned int bytesIn : 1; 
        unsigned int bytesOut : 1; 
        unsigned int bytesOutOfOrder : 1; 
        unsigned int bytesRetransmitted : 1; 
        unsigned int connectedAddressIndex : 1; 
        unsigned int connectionReuseCount : 1; 
        unsigned int currentRTT : 1; 
        unsigned int dataStallCount : 1; 
        unsigned int flowConnectMilliseconds : 1; 
        unsigned int flowDurationMilliseconds : 1; 
        unsigned int ipv4AddressCount : 1; 
        unsigned int ipv4DNSServerCount : 1; 
        unsigned int ipv6AddressCount : 1; 
        unsigned int ipv6DNSServerCount : 1; 
        unsigned int multipathBytesInCell : 1; 
        unsigned int multipathBytesInInitial : 1; 
        unsigned int multipathBytesInWiFi : 1; 
        unsigned int multipathBytesOutCell : 1; 
        unsigned int multipathBytesOutInitial : 1; 
        unsigned int multipathBytesOutWiFi : 1; 
        unsigned int multipathServiceType : 1; 
        unsigned int packetsIn : 1; 
        unsigned int packetsOut : 1; 
        unsigned int pathTriggerMilliseconds : 1; 
        unsigned int proxyMilliseconds : 1; 
        unsigned int rTTvariance : 1; 
        unsigned int resolutionMilliseconds : 1; 
        unsigned int smoothedRTT : 1; 
        unsigned int synRetransmissionCount : 1; 
        unsigned int timestamp : 1; 
        unsigned int tlsMilliseconds : 1; 
        unsigned int trafficClass : 1; 
        unsigned int appleApp : 1; 
        unsigned int appleHost : 1; 
        unsigned int connectedAddressFamily : 1; 
        unsigned int connectedInterfaceType : 1; 
        unsigned int connectionMode : 1; 
        unsigned int failureReason : 1; 
        unsigned int firstAddressFamily : 1; 
        unsigned int stackLevel : 1; 
        unsigned int tlsVersion : 1; 
        unsigned int usedProxyType : 1; 
        unsigned int customProxyConfigured : 1; 
        unsigned int fallbackEligible : 1; 
        unsigned int firstParty : 1; 
        unsigned int ipv4Available : 1; 
        unsigned int ipv6Available : 1; 
        unsigned int multipathConfigured : 1; 
        unsigned int resolutionRequired : 1; 
        unsigned int synthesizedExtraIPv6Address : 1; 
        unsigned int synthesizedIPv6Address : 1; 
        unsigned int systemProxyConfigured : 1; 
        unsigned int tfoConfigured : 1; 
        unsigned int tfoUsed : 1; 
        unsigned int tlsConfigured : 1; 
        unsigned int tlsVersionTimeout : 1; 
        unsigned int triggeredPath : 1; 
        unsigned int usedFallback : 1; 
        unsigned int weakFallback : 1; 
    }  _has;
    unsigned long long  _ipv4AddressCount;
    bool  _ipv4Available;
    unsigned long long  _ipv4DNSServerCount;
    unsigned long long  _ipv6AddressCount;
    bool  _ipv6Available;
    unsigned long long  _ipv6DNSServerCount;
    unsigned long long  _multipathBytesInCell;
    unsigned long long  _multipathBytesInInitial;
    unsigned long long  _multipathBytesInWiFi;
    unsigned long long  _multipathBytesOutCell;
    unsigned long long  _multipathBytesOutInitial;
    unsigned long long  _multipathBytesOutWiFi;
    bool  _multipathConfigured;
    unsigned long long  _multipathServiceType;
    unsigned long long  _packetsIn;
    unsigned long long  _packetsOut;
    unsigned long long  _pathTriggerMilliseconds;
    unsigned long long  _proxyMilliseconds;
    unsigned long long  _rTTvariance;
    unsigned long long  _resolutionMilliseconds;
    bool  _resolutionRequired;
    unsigned long long  _smoothedRTT;
    int  _stackLevel;
    unsigned long long  _synRetransmissionCount;
    bool  _synthesizedExtraIPv6Address;
    bool  _synthesizedIPv6Address;
    bool  _systemProxyConfigured;
    bool  _tfoConfigured;
    bool  _tfoUsed;
    unsigned long long  _timestamp;
    bool  _tlsConfigured;
    unsigned long long  _tlsMilliseconds;
    int  _tlsVersion;
    bool  _tlsVersionTimeout;
    unsigned long long  _trafficClass;
    bool  _triggeredPath;
    bool  _usedFallback;
    int  _usedProxyType;
    bool  _weakFallback;
}

@property (nonatomic) int appleApp;
@property (nonatomic) int appleHost;
@property (nonatomic) unsigned long long bestRTT;
@property (nonatomic) unsigned long long bytesDuplicate;
@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) unsigned long long bytesOutOfOrder;
@property (nonatomic) unsigned long long bytesRetransmitted;
@property (nonatomic) int connectedAddressFamily;
@property (nonatomic) unsigned long long connectedAddressIndex;
@property (nonatomic) int connectedInterfaceType;
@property (nonatomic) int connectionMode;
@property (nonatomic) unsigned long long connectionReuseCount;
@property (nonatomic) unsigned long long currentRTT;
@property (nonatomic) bool customProxyConfigured;
@property (nonatomic) unsigned long long dataStallCount;
@property (nonatomic) int failureReason;
@property (nonatomic) bool fallbackEligible;
@property (nonatomic) int firstAddressFamily;
@property (nonatomic) bool firstParty;
@property (nonatomic) unsigned long long flowConnectMilliseconds;
@property (nonatomic) unsigned long long flowDurationMilliseconds;
@property (nonatomic) bool hasAppleApp;
@property (nonatomic) bool hasAppleHost;
@property (nonatomic) bool hasBestRTT;
@property (nonatomic) bool hasBytesDuplicate;
@property (nonatomic) bool hasBytesIn;
@property (nonatomic) bool hasBytesOut;
@property (nonatomic) bool hasBytesOutOfOrder;
@property (nonatomic) bool hasBytesRetransmitted;
@property (nonatomic) bool hasConnectedAddressFamily;
@property (nonatomic) bool hasConnectedAddressIndex;
@property (nonatomic) bool hasConnectedInterfaceType;
@property (nonatomic) bool hasConnectionMode;
@property (nonatomic) bool hasConnectionReuseCount;
@property (nonatomic) bool hasCurrentRTT;
@property (nonatomic) bool hasCustomProxyConfigured;
@property (nonatomic) bool hasDataStallCount;
@property (nonatomic) bool hasFailureReason;
@property (nonatomic) bool hasFallbackEligible;
@property (nonatomic) bool hasFirstAddressFamily;
@property (nonatomic) bool hasFirstParty;
@property (nonatomic) bool hasFlowConnectMilliseconds;
@property (nonatomic) bool hasFlowDurationMilliseconds;
@property (nonatomic) bool hasIpv4AddressCount;
@property (nonatomic) bool hasIpv4Available;
@property (nonatomic) bool hasIpv4DNSServerCount;
@property (nonatomic) bool hasIpv6AddressCount;
@property (nonatomic) bool hasIpv6Available;
@property (nonatomic) bool hasIpv6DNSServerCount;
@property (nonatomic) bool hasMultipathBytesInCell;
@property (nonatomic) bool hasMultipathBytesInInitial;
@property (nonatomic) bool hasMultipathBytesInWiFi;
@property (nonatomic) bool hasMultipathBytesOutCell;
@property (nonatomic) bool hasMultipathBytesOutInitial;
@property (nonatomic) bool hasMultipathBytesOutWiFi;
@property (nonatomic) bool hasMultipathConfigured;
@property (nonatomic) bool hasMultipathServiceType;
@property (nonatomic) bool hasPacketsIn;
@property (nonatomic) bool hasPacketsOut;
@property (nonatomic) bool hasPathTriggerMilliseconds;
@property (nonatomic) bool hasProxyMilliseconds;
@property (nonatomic) bool hasRTTvariance;
@property (nonatomic) bool hasResolutionMilliseconds;
@property (nonatomic) bool hasResolutionRequired;
@property (nonatomic) bool hasSmoothedRTT;
@property (nonatomic) bool hasStackLevel;
@property (nonatomic) bool hasSynRetransmissionCount;
@property (nonatomic) bool hasSynthesizedExtraIPv6Address;
@property (nonatomic) bool hasSynthesizedIPv6Address;
@property (nonatomic) bool hasSystemProxyConfigured;
@property (nonatomic) bool hasTfoConfigured;
@property (nonatomic) bool hasTfoUsed;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTlsConfigured;
@property (nonatomic) bool hasTlsMilliseconds;
@property (nonatomic) bool hasTlsVersion;
@property (nonatomic) bool hasTlsVersionTimeout;
@property (nonatomic) bool hasTrafficClass;
@property (nonatomic) bool hasTriggeredPath;
@property (nonatomic) bool hasUsedFallback;
@property (nonatomic) bool hasUsedProxyType;
@property (nonatomic) bool hasWeakFallback;
@property (nonatomic) unsigned long long ipv4AddressCount;
@property (nonatomic) bool ipv4Available;
@property (nonatomic) unsigned long long ipv4DNSServerCount;
@property (nonatomic) unsigned long long ipv6AddressCount;
@property (nonatomic) bool ipv6Available;
@property (nonatomic) unsigned long long ipv6DNSServerCount;
@property (nonatomic) unsigned long long multipathBytesInCell;
@property (nonatomic) unsigned long long multipathBytesInInitial;
@property (nonatomic) unsigned long long multipathBytesInWiFi;
@property (nonatomic) unsigned long long multipathBytesOutCell;
@property (nonatomic) unsigned long long multipathBytesOutInitial;
@property (nonatomic) unsigned long long multipathBytesOutWiFi;
@property (nonatomic) bool multipathConfigured;
@property (nonatomic) unsigned long long multipathServiceType;
@property (nonatomic) unsigned long long packetsIn;
@property (nonatomic) unsigned long long packetsOut;
@property (nonatomic) unsigned long long pathTriggerMilliseconds;
@property (nonatomic) unsigned long long proxyMilliseconds;
@property (nonatomic) unsigned long long rTTvariance;
@property (nonatomic) unsigned long long resolutionMilliseconds;
@property (nonatomic) bool resolutionRequired;
@property (nonatomic) unsigned long long smoothedRTT;
@property (nonatomic) int stackLevel;
@property (nonatomic) unsigned long long synRetransmissionCount;
@property (nonatomic) bool synthesizedExtraIPv6Address;
@property (nonatomic) bool synthesizedIPv6Address;
@property (nonatomic) bool systemProxyConfigured;
@property (nonatomic) bool tfoConfigured;
@property (nonatomic) bool tfoUsed;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool tlsConfigured;
@property (nonatomic) unsigned long long tlsMilliseconds;
@property (nonatomic) int tlsVersion;
@property (nonatomic) bool tlsVersionTimeout;
@property (nonatomic) unsigned long long trafficClass;
@property (nonatomic) bool triggeredPath;
@property (nonatomic) bool usedFallback;
@property (nonatomic) int usedProxyType;
@property (nonatomic) bool weakFallback;

- (int)StringAsAppleApp:(id)arg1;
- (int)StringAsAppleHost:(id)arg1;
- (int)StringAsConnectedAddressFamily:(id)arg1;
- (int)StringAsConnectedInterfaceType:(id)arg1;
- (int)StringAsConnectionMode:(id)arg1;
- (int)StringAsFailureReason:(id)arg1;
- (int)StringAsFirstAddressFamily:(id)arg1;
- (int)StringAsStackLevel:(id)arg1;
- (int)StringAsTlsVersion:(id)arg1;
- (int)StringAsUsedProxyType:(id)arg1;
- (int)appleApp;
- (id)appleAppAsString:(int)arg1;
- (int)appleHost;
- (id)appleHostAsString:(int)arg1;
- (unsigned long long)bestRTT;
- (unsigned long long)bytesDuplicate;
- (unsigned long long)bytesIn;
- (unsigned long long)bytesOut;
- (unsigned long long)bytesOutOfOrder;
- (unsigned long long)bytesRetransmitted;
- (int)connectedAddressFamily;
- (id)connectedAddressFamilyAsString:(int)arg1;
- (unsigned long long)connectedAddressIndex;
- (int)connectedInterfaceType;
- (id)connectedInterfaceTypeAsString:(int)arg1;
- (int)connectionMode;
- (id)connectionModeAsString:(int)arg1;
- (unsigned long long)connectionReuseCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentRTT;
- (bool)customProxyConfigured;
- (unsigned long long)dataStallCount;
- (id)description;
- (id)dictionaryRepresentation;
- (int)failureReason;
- (id)failureReasonAsString:(int)arg1;
- (bool)fallbackEligible;
- (int)firstAddressFamily;
- (id)firstAddressFamilyAsString:(int)arg1;
- (bool)firstParty;
- (unsigned long long)flowConnectMilliseconds;
- (unsigned long long)flowDurationMilliseconds;
- (bool)hasAppleApp;
- (bool)hasAppleHost;
- (bool)hasBestRTT;
- (bool)hasBytesDuplicate;
- (bool)hasBytesIn;
- (bool)hasBytesOut;
- (bool)hasBytesOutOfOrder;
- (bool)hasBytesRetransmitted;
- (bool)hasConnectedAddressFamily;
- (bool)hasConnectedAddressIndex;
- (bool)hasConnectedInterfaceType;
- (bool)hasConnectionMode;
- (bool)hasConnectionReuseCount;
- (bool)hasCurrentRTT;
- (bool)hasCustomProxyConfigured;
- (bool)hasDataStallCount;
- (bool)hasFailureReason;
- (bool)hasFallbackEligible;
- (bool)hasFirstAddressFamily;
- (bool)hasFirstParty;
- (bool)hasFlowConnectMilliseconds;
- (bool)hasFlowDurationMilliseconds;
- (bool)hasIpv4AddressCount;
- (bool)hasIpv4Available;
- (bool)hasIpv4DNSServerCount;
- (bool)hasIpv6AddressCount;
- (bool)hasIpv6Available;
- (bool)hasIpv6DNSServerCount;
- (bool)hasMultipathBytesInCell;
- (bool)hasMultipathBytesInInitial;
- (bool)hasMultipathBytesInWiFi;
- (bool)hasMultipathBytesOutCell;
- (bool)hasMultipathBytesOutInitial;
- (bool)hasMultipathBytesOutWiFi;
- (bool)hasMultipathConfigured;
- (bool)hasMultipathServiceType;
- (bool)hasPacketsIn;
- (bool)hasPacketsOut;
- (bool)hasPathTriggerMilliseconds;
- (bool)hasProxyMilliseconds;
- (bool)hasRTTvariance;
- (bool)hasResolutionMilliseconds;
- (bool)hasResolutionRequired;
- (bool)hasSmoothedRTT;
- (bool)hasStackLevel;
- (bool)hasSynRetransmissionCount;
- (bool)hasSynthesizedExtraIPv6Address;
- (bool)hasSynthesizedIPv6Address;
- (bool)hasSystemProxyConfigured;
- (bool)hasTfoConfigured;
- (bool)hasTfoUsed;
- (bool)hasTimestamp;
- (bool)hasTlsConfigured;
- (bool)hasTlsMilliseconds;
- (bool)hasTlsVersion;
- (bool)hasTlsVersionTimeout;
- (bool)hasTrafficClass;
- (bool)hasTriggeredPath;
- (bool)hasUsedFallback;
- (bool)hasUsedProxyType;
- (bool)hasWeakFallback;
- (unsigned long long)hash;
- (unsigned long long)ipv4AddressCount;
- (bool)ipv4Available;
- (unsigned long long)ipv4DNSServerCount;
- (unsigned long long)ipv6AddressCount;
- (bool)ipv6Available;
- (unsigned long long)ipv6DNSServerCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)multipathBytesInCell;
- (unsigned long long)multipathBytesInInitial;
- (unsigned long long)multipathBytesInWiFi;
- (unsigned long long)multipathBytesOutCell;
- (unsigned long long)multipathBytesOutInitial;
- (unsigned long long)multipathBytesOutWiFi;
- (bool)multipathConfigured;
- (unsigned long long)multipathServiceType;
- (unsigned long long)packetsIn;
- (unsigned long long)packetsOut;
- (unsigned long long)pathTriggerMilliseconds;
- (unsigned long long)proxyMilliseconds;
- (unsigned long long)rTTvariance;
- (bool)readFrom:(id)arg1;
- (unsigned long long)resolutionMilliseconds;
- (bool)resolutionRequired;
- (void)setAppleApp:(int)arg1;
- (void)setAppleHost:(int)arg1;
- (void)setBestRTT:(unsigned long long)arg1;
- (void)setBytesDuplicate:(unsigned long long)arg1;
- (void)setBytesIn:(unsigned long long)arg1;
- (void)setBytesOut:(unsigned long long)arg1;
- (void)setBytesOutOfOrder:(unsigned long long)arg1;
- (void)setBytesRetransmitted:(unsigned long long)arg1;
- (void)setConnectedAddressFamily:(int)arg1;
- (void)setConnectedAddressIndex:(unsigned long long)arg1;
- (void)setConnectedInterfaceType:(int)arg1;
- (void)setConnectionMode:(int)arg1;
- (void)setConnectionReuseCount:(unsigned long long)arg1;
- (void)setCurrentRTT:(unsigned long long)arg1;
- (void)setCustomProxyConfigured:(bool)arg1;
- (void)setDataStallCount:(unsigned long long)arg1;
- (void)setFailureReason:(int)arg1;
- (void)setFallbackEligible:(bool)arg1;
- (void)setFirstAddressFamily:(int)arg1;
- (void)setFirstParty:(bool)arg1;
- (void)setFlowConnectMilliseconds:(unsigned long long)arg1;
- (void)setFlowDurationMilliseconds:(unsigned long long)arg1;
- (void)setHasAppleApp:(bool)arg1;
- (void)setHasAppleHost:(bool)arg1;
- (void)setHasBestRTT:(bool)arg1;
- (void)setHasBytesDuplicate:(bool)arg1;
- (void)setHasBytesIn:(bool)arg1;
- (void)setHasBytesOut:(bool)arg1;
- (void)setHasBytesOutOfOrder:(bool)arg1;
- (void)setHasBytesRetransmitted:(bool)arg1;
- (void)setHasConnectedAddressFamily:(bool)arg1;
- (void)setHasConnectedAddressIndex:(bool)arg1;
- (void)setHasConnectedInterfaceType:(bool)arg1;
- (void)setHasConnectionMode:(bool)arg1;
- (void)setHasConnectionReuseCount:(bool)arg1;
- (void)setHasCurrentRTT:(bool)arg1;
- (void)setHasCustomProxyConfigured:(bool)arg1;
- (void)setHasDataStallCount:(bool)arg1;
- (void)setHasFailureReason:(bool)arg1;
- (void)setHasFallbackEligible:(bool)arg1;
- (void)setHasFirstAddressFamily:(bool)arg1;
- (void)setHasFirstParty:(bool)arg1;
- (void)setHasFlowConnectMilliseconds:(bool)arg1;
- (void)setHasFlowDurationMilliseconds:(bool)arg1;
- (void)setHasIpv4AddressCount:(bool)arg1;
- (void)setHasIpv4Available:(bool)arg1;
- (void)setHasIpv4DNSServerCount:(bool)arg1;
- (void)setHasIpv6AddressCount:(bool)arg1;
- (void)setHasIpv6Available:(bool)arg1;
- (void)setHasIpv6DNSServerCount:(bool)arg1;
- (void)setHasMultipathBytesInCell:(bool)arg1;
- (void)setHasMultipathBytesInInitial:(bool)arg1;
- (void)setHasMultipathBytesInWiFi:(bool)arg1;
- (void)setHasMultipathBytesOutCell:(bool)arg1;
- (void)setHasMultipathBytesOutInitial:(bool)arg1;
- (void)setHasMultipathBytesOutWiFi:(bool)arg1;
- (void)setHasMultipathConfigured:(bool)arg1;
- (void)setHasMultipathServiceType:(bool)arg1;
- (void)setHasPacketsIn:(bool)arg1;
- (void)setHasPacketsOut:(bool)arg1;
- (void)setHasPathTriggerMilliseconds:(bool)arg1;
- (void)setHasProxyMilliseconds:(bool)arg1;
- (void)setHasRTTvariance:(bool)arg1;
- (void)setHasResolutionMilliseconds:(bool)arg1;
- (void)setHasResolutionRequired:(bool)arg1;
- (void)setHasSmoothedRTT:(bool)arg1;
- (void)setHasStackLevel:(bool)arg1;
- (void)setHasSynRetransmissionCount:(bool)arg1;
- (void)setHasSynthesizedExtraIPv6Address:(bool)arg1;
- (void)setHasSynthesizedIPv6Address:(bool)arg1;
- (void)setHasSystemProxyConfigured:(bool)arg1;
- (void)setHasTfoConfigured:(bool)arg1;
- (void)setHasTfoUsed:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTlsConfigured:(bool)arg1;
- (void)setHasTlsMilliseconds:(bool)arg1;
- (void)setHasTlsVersion:(bool)arg1;
- (void)setHasTlsVersionTimeout:(bool)arg1;
- (void)setHasTrafficClass:(bool)arg1;
- (void)setHasTriggeredPath:(bool)arg1;
- (void)setHasUsedFallback:(bool)arg1;
- (void)setHasUsedProxyType:(bool)arg1;
- (void)setHasWeakFallback:(bool)arg1;
- (void)setIpv4AddressCount:(unsigned long long)arg1;
- (void)setIpv4Available:(bool)arg1;
- (void)setIpv4DNSServerCount:(unsigned long long)arg1;
- (void)setIpv6AddressCount:(unsigned long long)arg1;
- (void)setIpv6Available:(bool)arg1;
- (void)setIpv6DNSServerCount:(unsigned long long)arg1;
- (void)setMultipathBytesInCell:(unsigned long long)arg1;
- (void)setMultipathBytesInInitial:(unsigned long long)arg1;
- (void)setMultipathBytesInWiFi:(unsigned long long)arg1;
- (void)setMultipathBytesOutCell:(unsigned long long)arg1;
- (void)setMultipathBytesOutInitial:(unsigned long long)arg1;
- (void)setMultipathBytesOutWiFi:(unsigned long long)arg1;
- (void)setMultipathConfigured:(bool)arg1;
- (void)setMultipathServiceType:(unsigned long long)arg1;
- (void)setPacketsIn:(unsigned long long)arg1;
- (void)setPacketsOut:(unsigned long long)arg1;
- (void)setPathTriggerMilliseconds:(unsigned long long)arg1;
- (void)setProxyMilliseconds:(unsigned long long)arg1;
- (void)setRTTvariance:(unsigned long long)arg1;
- (void)setResolutionMilliseconds:(unsigned long long)arg1;
- (void)setResolutionRequired:(bool)arg1;
- (void)setSmoothedRTT:(unsigned long long)arg1;
- (void)setStackLevel:(int)arg1;
- (void)setSynRetransmissionCount:(unsigned long long)arg1;
- (void)setSynthesizedExtraIPv6Address:(bool)arg1;
- (void)setSynthesizedIPv6Address:(bool)arg1;
- (void)setSystemProxyConfigured:(bool)arg1;
- (void)setTfoConfigured:(bool)arg1;
- (void)setTfoUsed:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTlsConfigured:(bool)arg1;
- (void)setTlsMilliseconds:(unsigned long long)arg1;
- (void)setTlsVersion:(int)arg1;
- (void)setTlsVersionTimeout:(bool)arg1;
- (void)setTrafficClass:(unsigned long long)arg1;
- (void)setTriggeredPath:(bool)arg1;
- (void)setUsedFallback:(bool)arg1;
- (void)setUsedProxyType:(int)arg1;
- (void)setWeakFallback:(bool)arg1;
- (unsigned long long)smoothedRTT;
- (int)stackLevel;
- (id)stackLevelAsString:(int)arg1;
- (unsigned long long)synRetransmissionCount;
- (bool)synthesizedExtraIPv6Address;
- (bool)synthesizedIPv6Address;
- (bool)systemProxyConfigured;
- (bool)tfoConfigured;
- (bool)tfoUsed;
- (unsigned long long)timestamp;
- (bool)tlsConfigured;
- (unsigned long long)tlsMilliseconds;
- (int)tlsVersion;
- (id)tlsVersionAsString:(int)arg1;
- (bool)tlsVersionTimeout;
- (unsigned long long)trafficClass;
- (bool)triggeredPath;
- (bool)usedFallback;
- (int)usedProxyType;
- (id)usedProxyTypeAsString:(int)arg1;
- (bool)weakFallback;
- (void)writeTo:(id)arg1;

@end
