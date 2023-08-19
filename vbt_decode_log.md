```
root@user-host:/sys/kernel/debug/dri/0# intel_vbt_decode i915_vbt
VBT header:
        VBT signature:          "$VBT TIGERLAKE      "
        VBT version:            0x0064 (1.0)
        VBT header size:        0x0030 (48)
        VBT size:               0x21da (8666)
        VBT checksum:           0xd0
        BDB offset:             0x00000030 (48)

BDB header:
        BDB signature:          "BIOS_DATA_BLOCK "
        BDB version:            250
        BDB header size:        0x0016 (22)
        BDB size:               0x21a9 (8617)

BDB blocks present:
          1   2   9  10  12  20  27  40  42  43  44  46  51  52  56  57
        252 253 254

BDB block 1 - General features block:
        Panel fitting: text & graphics
        Flexaim: yes
        Message: yes
        Clear screen: 0
        DVO color flip required: no
        External VBT: no
        Enable SSC: no
        LFP on override: no
        Disable SSC on clone: no
        Underscan support for VGA timings: no
        Dynamic CD clock: yes
        Hotplug support in VBIOS: no
        Disable smooth vision: no
        Single DVI for CRT/DVI: no
        Enable 180 degree rotation: no
        Inverted FDI Rx polarity: no
        Extended VBIOS mode: no
        Copy iLFP DTD to SDVO LVDS DTD: no
        Best fit panel timing algorithm: no
        Ignore strap state: no
        Legacy monitor detect: yes
        Integrated CRT: no
        Integrated TV: no
        Integrated EFP: no
        DP SSC enable: no
        DP SSC dongle supported: no

BDB block 2 - General definitions block:
        CRT DDC GMBUS addr: 0x02
        Use ACPI DPMS CRT power states: no
        Skip CRT detect at boot: no
        Use DPMS on AIM devices: yes
        Boot display type: 0x0000
        Child device size: 39
        Child device count: 9
        Child device info:
                Device handle: 0x0004 (EFP 1 (HDMI/DVI/DP))
                Device type: 0x60d2 (DVI-D)
                        Power management
                        Hotplug signaling
                        HDMI output
                        Content protection
                        High speed link
                        TMDS/DVI signaling
                        Digital output
                I2C speed: 0x00
                DP onboard redriver: 0x10
                DP ondock redriver: 0x10
                HDMI level shifter value: 0x00
                HDMI max data rate: 297 MHz (0x01)
                Offset to DTD buffer for edidless CHILD: 0x20fa
                Edidless EFP: no
                Compression enable: no
                Compression method CPS: no
                Dual pipe ganged eDP: no
                Compression structure index: 0x00)
                Slave DDI port: 0x00 (HDMI-A)
                AIM offset: 0
                DVO Port: 0x01 (HDMI-B)
                AIM I2C pin: 0x00
                AIM Slave address: 0x00
                DDC pin: 0x02
                EDID buffer ptr: 0x00
                DVO config: 0x00
                EFP routed through dock: no
                Lane reversal: no
                Onboard LSPCON: no
                Iboost enable: no
                HPD sense invert: no
                HDMI compatible? no
                DP compatible? no
                TMDS compatible? no
                Aux channel: 0x10
                Dongle detect: 0x01
                Pipe capabilities: 0x00
                SDVO stall signal available: no
                Hotplug connect status: 0x00
                Integrated encoder instead of SDVO: yes
                DVO wiring: 0x01
                MIPI bridge type: 00 (unknown)
                Device class extension: 0x00
                DVO function: 0x00
                DP USB type C support: no
                2X DP GPIO index: 0x00
                2X DP GPIO pin number: 0x00
                IBoost level for HDMI: 0x00
                IBoost level for DP/eDP: 0x00
        Child device info:
                Device handle: 0x0040 (EFP 2 (HDMI/DVI/DP))
                Device type: 0x60d6 (DisplayPort/HDMI/DVI)
                        Power management
                        Hotplug signaling
                        HDMI output
                        Content protection
                        High speed link
                        TMDS/DVI signaling
                        DisplayPort output
                        Digital output
                I2C speed: 0x00
                DP onboard redriver: 0x10
                DP ondock redriver: 0x10
                HDMI level shifter value: 0x00
                HDMI max data rate: <platform max> (0x00)
                Offset to DTD buffer for edidless CHILD: 0x2116
                Edidless EFP: no
                Compression enable: no
                Compression method CPS: no
                Dual pipe ganged eDP: no
                Compression structure index: 0x00)
                Slave DDI port: 0x00 (HDMI-A)
                AIM offset: 0
                DVO Port: 0x08 (DP-C)
                AIM I2C pin: 0x00
                AIM Slave address: 0x00
                DDC pin: 0x03
                EDID buffer ptr: 0x00
                DVO config: 0x00
                EFP routed through dock: no
                Lane reversal: no
                Onboard LSPCON: no
                Iboost enable: no
                HPD sense invert: no
                HDMI compatible? no
                DP compatible? no
                TMDS compatible? no
                Aux channel: 0x20
                Dongle detect: 0x01
                Pipe capabilities: 0x00
                SDVO stall signal available: no
                Hotplug connect status: 0x00
                Integrated encoder instead of SDVO: yes
                DVO wiring: 0x01
                MIPI bridge type: 00 (unknown)
                Device class extension: 0x00
                DVO function: 0x00
                DP USB type C support: no
                2X DP GPIO index: 0x00
                2X DP GPIO pin number: 0x00
                IBoost level for HDMI: 0x00
                IBoost level for DP/eDP: 0x00
        Child device info:
                Device handle: 0x0020 (EFP 3 (HDMI/DVI/DP))
                Device type: 0x68c6 (DisplayPort)
                        Power management
                        Hotplug signaling
                        Content protection
                        High speed link
                        DisplayPort output
                        Digital output
                I2C speed: 0x00
                DP onboard redriver: 0x10
                DP ondock redriver: 0x10
                HDMI level shifter value: 0x00
                HDMI max data rate: <platform max> (0x00)
                Offset to DTD buffer for edidless CHILD: 0x2132
                Edidless EFP: no
                Compression enable: no
                Compression method CPS: no
                Dual pipe ganged eDP: no
                Compression structure index: 0x00)
                Slave DDI port: 0x00 (HDMI-A)
                AIM offset: 0
                DVO Port: 0x0a (DP-A)
                AIM I2C pin: 0x00
                AIM Slave address: 0x00
                DDC pin: 0x00
                EDID buffer ptr: 0x00
                DVO config: 0x00
                EFP routed through dock: no
                Lane reversal: no
                Onboard LSPCON: no
                Iboost enable: no
                HPD sense invert: no
                HDMI compatible? no
                DP compatible? no
                TMDS compatible? no
                Aux channel: 0x40
                Dongle detect: 0x01
                Pipe capabilities: 0x00
                SDVO stall signal available: no
                Hotplug connect status: 0x00
                Integrated encoder instead of SDVO: yes
                DVO wiring: 0x01
                MIPI bridge type: 00 (unknown)
                Device class extension: 0x00
                DVO function: 0x00
                DP USB type C support: no
                2X DP GPIO index: 0x00
                2X DP GPIO pin number: 0x00
                IBoost level for HDMI: 0x00
                IBoost level for DP/eDP: 0x00

BDB block 9 - PSR block:
        Panel 2 *
                Full link: no
                Require AUX to wakeup: no
                Lines to wait before link standby: 0
                Idle frames to for PSR enable: 0
                TP1 wakeup time: 200 usec (0x2)
                TP2/TP3 wakeup time: 200 usec (0x2)
                PSR2 TP2/TP3 wakeup time: 2500 usec (0x2)

BDB block 10 - Unknown, no decoding available:

BDB block 12 - Driver feature data block:
        Boot Device Algorithm: os default
        Block display switching when DVD active: yes
        Allow display switching when in Full Screen DOS: no
        Hot Plug DVO: yes
        Dual View Zoom: no
        Driver INT 15h hook: no
        Enable Sprite in Clone Mode: yes
        Use 00000110h ID for Primary LFP: no
        Boot Mode X: 1024
        Boot Mode Y: 768
        Boot Mode Bpp: 8
        Boot Mode Refresh: 60
        Enable LFP as primary: no
        Selective Mode Pruning: no
        Dual-Frequency Graphics Technology: yes
        Default Render Clock Frequency: high
        NT 4.0 Dual Display Clone Support: no
        Default Power Scheme user interface: CUI
        Sprite Display Assignment when Overlay is Active in Clone Mode: secondary
        Display Maintain Aspect Scaling via CUI: yes
        Preserve Aspect Ratio: no
        Enable SDVO device power down: no
        CRT hotplug: yes
        LVDS config: Embedded DisplayPort
        Define Display statically: no
        Legacy CRT max X: 0
        Legacy CRT max Y: 0
        Legacy CRT max refresh: 85
        Enable DRRS: yes
        Enable PSR: yes

BDB block 20 - Unknown, no decoding available:

BDB block 27 - eDP block:
        Panel 2 *
                Power Sequence: T3 2000 T7 10 T9 2000 T10 500 T12 5000
                Panel color depth: 18 bpp
                eDP sDRRS MSA Delay: Lane 1
                Fast link params:
                        rate: 1.62G
                        lanes: x1 mode
                        pre-emphasis: none
                        vswing: 0.4V
                Stereo 3D feature: no
                T3 optimization: yes
                Vswing/preemphasis table selection: Low power (200 mV)
                Fast link training: no
                DPCD 600h write required: no
                PWM delays:
                        PWM on to backlight enable: 0
                        Backlight disable to PWM off: 0
                Full link params provided: no
                Full link params:
                        pre-emphasis: none
                        vswing: 0.4V

BDB block 40 - LVDS options block:
        Panel type: 2
        LVDS EDID available: no
        Pixel dither: yes
        PFIT auto ratio: yes
        PFIT enhanced graphics mode: no
        PFIT enhanced text mode: no
        PFIT mode: 3

BDB block 42 - LVDS panel data block:
No LVDS ptr block

BDB block 43 - Backlight info block:
        Panel 2 *
                Inverter type: 2
                Active low: 0
                PWM freq: 200
                Minimum brightness: 6
                Level: 255
                Control type: 2
                Controller: 0

BDB block 44 - Unknown, no decoding available:

BDB block 46 - Unknown, no decoding available:

BDB block 51 - Unknown, no decoding available:

BDB block 52 - MIPI configuration block:
        General Param
                 BTA disable: Enabled
                 Panel Rotation: 0 degrees
                 Video Mode Color Format: RGB888
                 PPS GPIO Pins: Using PMIC
                 CABC Support: not supported
                 Mode: VIDEO
                 Video transfer mode: non-burst with sync events (0x2)
                 Dithering: done in Panel Controller
        Port Desc
                 Pixel overlap: 0
                 Lane Count: 4
                 Dual Link Support: not supported
        Dphy Flags
                 Clock Stop: DISABLED
                 EOT disabled: EOT to be sent

        HSTxTimeOut: 0x3fffff
        LPRXTimeOut: 0xffff
        TurnAroundTimeOut: 0x17
        DeviceResetTimer: 0xff
        MasterinitTimer: 0x7d0
        DBIBandwidthTimer: 0x0
        LpByteClkValue: 0x4

        Dphy Params
                Exit to zero Count: 0x3f
                Trail Count: 0x1F
                Clk zero count: 0x7f
                Prepare count:0xf

        ClockLaneSwitchingCount: 0xa0014
        HighToLowSwitchingCount: 0x46

        Timings based on Dphy spec
                TClkMiss: 0x3c
                TClkPost: 0x3c
                TClkPre: 0x8
                TClkPrepare: 0x32
                TClkSettle: 0x69
                TClkTermEnable: 0x26

        TClkTrail: 0x46
        TClkPrepareTClkZero: 0x136
        THSExit: 0x6e
        THsPrepare: 0x32
        THsPrepareTHsZero: 0xc8
        THSSettle: 0x5f
        THSSkip: 0x28
        THsTrail: 0x3c
        TInit: 0x0
        TLPX: 0x32
        MIPI PPS
                Panel power ON delay: 500
                Panel power on to Backlight enable delay: 500
                Backlight disable to Panel power OFF delay: 500
                Panel power OFF delay: 500
                Panel power cycle delay: 5000

BDB block 56 - Compression parameters block:
        DSC block 2 *
                DSC version: 0.0
                Actual buffer size: 1024
                        RC buffer block size: 1024 (0)
                        RC buffer size: 0
                Slices per line: 0x00
                Line buffer depth: 8 bits (0)
                Block prediction enable: 0
                Max bpp: 6 bpp (0)
                Support 8 bpc: 0
                Support 10 bpc: 0
                Support 12 bpc: 0
                Slice height: 0

BDB block 57 - Unknown, no decoding available:

BDB block 252 - Unknown, no decoding available:

BDB block 253 - Unknown, no decoding available:

BDB block 254 - Unknown, no decoding available:

root@user-host:/sys/kernel/debug/dri/0#

```
